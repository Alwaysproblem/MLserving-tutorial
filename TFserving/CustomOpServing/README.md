# Custom Operations for Tensorflow and Tensorflow serving

## Custom Operation Installation

[Op whl installation](../CustomOp/README.md)

- clone this repo

```bash
$ git clone https://github.com/Alwaysproblem/MLserving-tutorial.git
$ cd MLserving-tutorial/TFserving/CustomOpServing
```

- clone tensorflow source code and tensorflow serving source code

```bash
$ git clone -b r2.10 https://github.com/tensorflow/serving.git
```

Test for environment setup:

```bash
$ python ../CustomOp/custom-op/add_index/python/ops/add_index_ops_test.py
# Running tests under Python 3.8.13: /root/anaconda3/envs/build_tf/bin/python
# [ RUN      ] AddIndexTest.testAddIndex
# WARNING:tensorflow:From /root/anaconda3/envs/build_tf/lib/python3.8/contextlib.py:83: TensorFlowTestCase.test_session (from tensorflow.python.framework.test_util) is deprecated and will be removed in a future version.
# Instructions for updating:
# Use `self.session()` or `self.cached_session()` instead.
# W1109 07:21:54.484943 139971962054464 deprecation.py:350] From /root/anaconda3/envs/build_tf/lib/python3.8/contextlib.py:83: TensorFlowTestCase.test_session (from tensorflow.python.framework.test_util) is deprecated and will be removed in a future version.
# Instructions for updating:
# Use `self.session()` or `self.cached_session()` instead.
# 2022-11-09 07:21:54.485644: I tensorflow/core/platform/cpu_feature_guard.cc:193] This TensorFlow binary is optimized with oneAPI Deep Neural Network Library (oneDNN) to use the following CPU instructions in performance-critical operations:  AVX2 FMA
# To enable them in other operations, rebuild TensorFlow with the appropriate compiler flags.
# INFO:tensorflow:time(__main__.AddIndexTest.testAddIndex): 0.05s
# I1109 07:21:54.535537 139971962054464 test_util.py:2460] time(__main__.AddIndexTest.testAddIndex): 0.05s
# [       OK ] AddIndexTest.testAddIndex
# [ RUN      ] AddIndexTest.test_session
# [  SKIPPED ] AddIndexTest.test_session
# ----------------------------------------------------------------------
# Ran 2 tests in 0.051s

# OK (skipped=1)
```

## Add `Add_index` op to the `serving` repo

- copy the `add_index` op source to the `serving` directory

```bash
$ cd serving
$ mkdir tensorflow_serving/custom_ops
$ cp -r ../../CustomOp/custom-op/add_index tensorflow_serving/custom_ops
```

- add this content to the `tensorflow_serving/custom_ops/add_index/BUILD`.
This content will be a target to build a static library `.a`.

```python
cc_library(
    name = 'add_index_ops',
    srcs = [
        "cc/kernels/add_index_kernels.cc",
        "cc/ops/add_index_ops.cc",
    ],
    alwayslink = 1,
    deps = [
        "@org_tensorflow//tensorflow/core:framework",
    ]
)
```

## Build ModelServer with the op linked in

- Edit `tensorflow_serving/model_servers/BUILD` to add your custom op build target to `SUPPORTED_TENSORFLOW_OPS` which is included in the `server_lib` target:

```python
SUPPORTED_TENSORFLOW_OPS = [
    ...
] + [
    "//tensorflow_serving/custom_ops/add_index:add_index_ops"
]
```

- Then use the Docker environment to build the ModelServer:


```bash
$ tools/run_in_docker.sh bazel build tensorflow_serving/model_servers:tensorflow_model_server
```

## Save a Custom Op Model

- you can save the custom op model to `add_index_serverable/1`

```bash
$ cd ..
$ python custom_op_model.py
# ...
# 2022-11-09 08:18:56.970621: I tensorflow/stream_executor/cuda/cuda_diagnostics.cc:156] kernel driver does not appear to be running on this host (sgjur-pod006-2): /proc/driver/nvidia/version does not exist
# 2022-11-09 08:18:56.970816: I tensorflow/core/platform/cpu_feature_guard.cc:193] This TensorFlow binary is optimized with oneAPI Deep Neural Network Library (oneDNN) to use the following CPU instructions in performance-critical operations:  AVX2 FMA
# To enable them in other operations, rebuild TensorFlow with the appropriate compiler flags.
# tf.Tensor([ 1.  4.  6.  8. 10.], shape=(5,), dtype=float32)
```

## Serving the model with tfserving

- you can run the command below with the tfserving dev container.

```bash
$ tools/run_in_docker.sh -o "-v $(dirname $(pwd))/add_index_serverable/:/models/add_index_serverable/" \
bazel-bin/tensorflow_serving/model_servers/tensorflow_model_server --port=18500 \
--rest_api_port=28501 --model_name=add_index_serverable --model_base_path=/models/add_index_serverable
```

- or you can cp the binary to the `CustomOpServing` directory and run the binary directly

```bash
$ cp serving/.cache/_bazel_scotty/<__hash_str__>/execroot/tf_serving/bazel-out/k8-opt/bin/tensorflow_serving/model_servers/tensorflow_model_server ./

$ ./tensorflow_model_server --port 18500 --rest_api_port=28501 --model_name=add_index_serverable --model_base_path=`pwd`/add_index_serverable
```

## Send an inference request to test op manually

- You can now send an inference request to the model server to test your custom op:

```bash
$ curl http://localhost:28501/v1/models/add_index_serverable:predict -X POST -d '{"inputs": [1,3,4,5,6]}'
# {
#     "outputs": [
#         1.0,
#         4.0,
#         6.0,
#         8.0,
#         10.0
#     ]
# }
```

Reference:

- [https://www.tensorflow.org/tfx/serving/custom_op](https://www.tensorflow.org/tfx/serving/custom_op)
