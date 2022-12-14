# TFServing

## Basic tutorial for Tensorflow Serving

## **Install Docker**

- **Window/MacOS**: install Docker from [DockerHub](https://hub.docker.com/?overlay=onboarding). (*need to register new account if you are newbie*)

- **linux**: install [Docker](https://runnable.com/docker/install-docker-on-linux)

## **Tutorial for starting**

- clone this repo

```bash
$ git clone https://github.com/Alwaysproblem/MLserving-tutorial
$ cd MLserving-tutorial/TFserving/ClientAPI
```

- clone tensorflow from source (optional)

```bash
$ git clone -b <version_you_need> https://github.com/tensorflow/tensorflow
```


- clone serving from source (optional)

```bash
$ git clone -b <version_you_need> https://github.com/tensorflow/serving
```

## **Easy TFServer**

- try simple example from tensorflow document.

  ```bash
  # Download the TensorFlow Serving Docker image and repo
  $ docker pull tensorflow/serving

  $ git clone https://github.com/tensorflow/serving
  # Location of demo models
  TESTDATA="$(pwd)/serving/tensorflow_serving/servables/tensorflow/testdata"

  # Start TensorFlow Serving container and open the REST API port
  $ docker run -it --rm -p 8501:8501 \
      -v "$TESTDATA/saved_model_half_plus_two_cpu:/models/half_plus_two" \
      -e MODEL_NAME=half_plus_two \
      tensorflow/serving &

  # Query the model using the predict API
  # need to create a new terminal.
  $ curl -d '{"instances": [1.0, 2.0, 5.0]}' \
      -X POST http://localhost:8501/v1/models/half_plus_two:predict

  # Returns => { "predictions": [2.5, 3.0, 4.5] }
  ```

- Docker common command.

  ```bash
  #kill all the alive image.
  $ docker kill $(docker ps -q)

  #stop all the alinve image
  $ docker stop $(docker ps -q)

  # remove all non-running image
  $ docker rm $$(docker ps -aq)

  # check all images
  $ dokcker ps -a

  #check the all alive image.
  $ docker ps

  #run a serving image as a daemon with a readable name.
  $ docker run -d --name serving_base tensorflow/serving

  #execute a command in the docker, you should substitute $(docker image name) for you own image name.
  $ docker exec -it ${docker image name} sh -c "cd /tmp"

  # enter docker ubuntu bash
  $ docker exec -it ${docker image name} bash -l
  ```

## **Run Server with your own saved pretrain models**

- make sure your model directory like this:

  ```text
  ---save
      |
      ---Model Name
            |
            ---1
                |
                ---asset
                |
                ---variables
                |
                ---model.pb
  ```

- substitute **user_define_model_name** for you own model name and **path_to_your_own_models** for directory path of your own model

  ```bash
  # run the server.
  $ docker run -it --rm -p 8501:8501 -v "$(pwd)/${path_to_your_own_models}/1:/models/${user_define_model_name}" -e MODEL_NAME=${user_define_model_name} tensorflow/serving &

  #run the client.
  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/${user_define_model_name}:predict
  ```

- you also can use tensorflow_model_server command after entering docker bash

  ```bash
  $ docker exec -it ${docker image name} bash -l

  $ tensorflow_model_server --port=8500 --rest_api_port=8501 --model_name=${MODEL_NAME} --model_base_path=${MODEL_BASE_PATH}/${MODEL_NAME}
  ```

- example
  - Save the model after running LinearKeras.py

    ```bash
    $ docker run -it --rm -p 8501:8501 -v "$(pwd)/save/Toy:/models/Toy" -e MODEL_NAME=Toy tensorflow/serving &

    $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy:predict

    # {
    #     "predictions": [[0.999035]
    #     ]
    ```

- bind your own model to the server
  - bind bash path to the model.

    ```bash
    $ docker run -p 8501:8501 --mount type=bind,source=/path/to/my_model/,target=/models/my_model -e MODEL_NAME=my_model -it tensorflow/serving
    ```

- example

  ```bash
  $ docker run -p 8501:8501 --mount type=bind,source=$(pwd)/save/Toy,target=/models/Toy -e MODEL_NAME=Toy -it tensorflow/serving

  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy:predict

  # {
  #     "predictions": [[0.999035]
  #     ]
  ```

## RESTful API

- data is like

  |   a   |   b   |   c   |   d   |   e   |   f   |
  | :---: | :---: | :---: | :---: | :---: | :---: |
  |  390  |  25   |   1   |   1   |   1   |   2   |
  |  345  |  34   |  45   |   2   |  34   | 3456  |

- `instances` means a row of data

  ```json
  {"instances": [
      {
        "a": [390],
        "b": [25],
        "c": [1],
        "d": [1],
        "e": [1],
        "f": [2]
      },
      {
        "a": [345],
        "b": [34],
        "c": [45],
        "d": [2],
        "e": [34],
        "f": [3456]
      }
    ]
  }
  ```

- `inputs` means a column of data

  ```json
    {"inputs":
      {
        "a": [[390], [345]],
        "b": [[25], [34]],
        "c": [[1], [45]],
        "d": [[1], [2]],
        "e": [[1], [34]],
        "f": [[2], [3456]]
      },
    }
  ```

- [REST API](https://www.tensorflow.org/tfx/serving/api_rest)

## **Run multiple model in TFServer**

- set up the configuration file named Toy.config

  ```protobuf
  model_config_list: {
    config: {
      name: "Toy",
      base_path: "/models/save/Toy/",
      model_platform: "tensorflow"
    },
    config: {
      name: "Toy_double",
      base_path: "/models/save/Toy_double/",
      model_platform: "tensorflow"
    }
  }
  ```

- substitute **Config Path** for you own configeratin file.

  ```bash
  docker run -it --rm -p 8501:8501 -v "$(pwd):/models/" tensorflow/serving --model_config_file=/models/${Config Path} --model_config_file_poll_wait_seconds=60
  ```

- example

  ```bash
  $ docker run -it --rm -p 8501:8501 -v "$(pwd):/models/" tensorflow/serving --model_config_file=/models/config/Toy.config

  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy_double:predict
  # {
  #     "predictions": [[6.80301666]
  #     ]
  # }

  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy:predict
  # {
  #     "predictions": [[0.999035]
  #     ]`
  # }
  ```

- bind your own path to TFserver. The model target path is related to the configuration file.

  ```bash
  $ docker run --rm -p 8500:8500 -p 8501:8501 \
    --mount type=bind,source=${/path/to/my_model/},target=/models/${my_model} \
    --mount type=bind,source=${/path/to/my/models.config},target=/models/${models.config} -it tensorflow/serving --model_config_file=/models/{models.config}
  ```

- example

  ```bash
  $ docker run --rm -p 8500:8500 -p 8501:8501 --mount type=bind,source=$(pwd)/save/,target=/models/save --mount type=bind,source=$(pwd)/config/Toy.config,target=/models/Toy.config -it tensorflow/serving --model_config_file=/models/Toy.config

  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy_double:predict
  # {
  #     "predictions": [[6.80301666]
  #     ]
  # }

  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy:predict
  # {
  #     "predictions": [[0.999035]
  #     ]
  # }
  ```

## **Version control for TFServer**

- set up single version control configuration file.

  ```protobuf
  model_config_list: {
    config: {
      name: "Toy",
      base_path: "/models/save/Toy/",
      model_platform: "tensorflow",
      model_version_policy: {
          specific {
              versions: 1
          }
      }
    },
    config: {
      name: "Toy_double",
      base_path: "/models/save/Toy_double/",
      model_platform: "tensorflow"
    }
  }
  ```

- set up multiple version control configuration file.

  ```protobuf
  model_config_list: {
    config: {
      name: "Toy",
      base_path: "/models/save/Toy/",
      model_platform: "tensorflow",
      model_version_policy: {
          specific {
              versions: 1,
              versions: 2
          }
      }
    },
    config: {
      name: "Toy_double",
      base_path: "/models/save/Toy_double/",
      model_platform: "tensorflow"
    }
  }
  ```

- example

  ```bash
  $ docker run --rm -p 8500:8500 -p 8501:8501 --mount type=bind,source=$(pwd)/save/,target=/models/save --mount type=bind,source=$(pwd)/config/versionctrl.config,target=/models/versionctrl.config -it tensorflow/serving --model_config_file=/models/versionctrl.config --model_config_file_poll_wait_seconds=60
  ```

- for POST

  ```bash
  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy/versions/1:predict
  # {
  #     "predictions": [[10.8054295]
  #     ]
  # }

  $ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy/versions/2:predict
  # {
  #     "predictions": [[0.999035]
  #     ]
  # }
  ```

- for gRPC

  ```bash
    $ python3 ClientAPI/python/grpc_request.py -m Toy -v 1
    # outputs {
    #   key: "output_1"
    #   value {
    #     dtype: DT_FLOAT
    #     tensor_shape {
    #       dim {
    #         size: 2
    #       }
    #       dim {
    #         size: 1
    #       }
    #     }
    #     float_val: 10.805429458618164
    #     float_val: 14.010123252868652
    #   }
    # }
    # model_spec {
    #   name: "Toy"
    #   version {
    #     value: 1
    #   }
    #   signature_name: "serving_default"
    # }
    $ python3 ClientAPI/python/grpc_request.py -m Toy -v 2
    # outputs {
    #   key: "output_1"
    #   value {
    #     dtype: DT_FLOAT
    #     tensor_shape {
    #       dim {
    #         size: 2
    #       }
    #       dim {
    #         size: 1
    #       }
    #     }
    #     float_val: 0.9990350008010864
    #     float_val: 0.9997349381446838
    #   }
    # }
    # model_spec {
    #   name: "Toy"
    #   version {
    #     value: 2
    #   }
    #   signature_name: "serving_default"
    # }
  ```

- set an alias label for each version. Only avaliable for gRPC.

  ```protobuf
  model_config_list: {
    config: {
      name: "Toy",
      base_path: "/models/save/Toy/",
      model_platform: "tensorflow",
      model_version_policy: {
          specific {
              versions: 1,
              versions: 2
          }
      },
      version_labels {
        key: 'stable',
        value: 1
      },
      version_labels {
        key: 'canary',
        value: 2
      }
    },
    config: {
      name: "Toy_double",
      base_path: "/models/save/Toy_double/",
      model_platform: "tensorflow"
    }
  }
  ```

- refer to [https://www.tensorflow.org/tfx/serving/serving_config](https://www.tensorflow.org/tfx/serving/serving_config)

    Please **note that** labels can only be assigned to model versions that are loaded and available for serving. Once a model version is available, one may reload the model config on the fly, to assign a label to it (can be achieved using HandleReloadConfigRequest RPC endpoint).

    Maybe you should delete the label related part first, then start the tensorflow serving, and finally add the label related part to the config file on the fly.

- set flag `--allow_version_labels_for_unavailable_models` true will be able to add version lables at the first runing.

  ``` bash
  $ docker run --rm -p 8500:8500 -p 8501:8501 --mount type=bind,source=$(pwd)/save/,target=/models/save --mount type=bind,source=$(pwd)/config/versionlabels.config,target=/models/versionctrl.config -it tensorflow/serving --model_config_file=/models/versionctrl.config --model_config_file_poll_wait_seconds=60 --allow_version_labels_for_unavailable_models
  ```

  ```bash
  $ python3 ClientAPI/python/grpc_request.py -m Toy -l stable
  # outputs {
  #   key: "output_1"
  #   value {
  #     dtype: DT_FLOAT
  #     tensor_shape {
  #       dim {
  #         size: 2
  #       }
  #       dim {
  #         size: 1
  #       }
  #     }
  #     float_val: 10.805429458618164
  #     float_val: 14.010123252868652
  #   }
  # }
  # model_spec {
  #   name: "Toy"
  #   version {
  #     value: 1
  #   }
  #   signature_name: "serving_default"
  # }
  $ python3 ClientAPI/python/grpc_request.py -m Toy -l canary
  # outputs {
  #   key: "output_1"
  #   value {
  #     dtype: DT_FLOAT
  #     tensor_shape {
  #       dim {
  #         size: 2
  #       }
  #       dim {
  #         size: 1
  #       }
  #     }
  #     float_val: 0.9990350008010864
  #     float_val: 0.9997349381446838
  #   }
  # }
  # model_spec {
  #   name: "Toy"
  #   version {
  #     value: 2
  #   }
  #   signature_name: "serving_default"
  # }
  ```

## **Other Configuration parameter**

- [Configuration](https://github.com/tensorflow/serving/tree/master/tensorflow_serving/config)

- Batch Configuration: need to set `--enable_batching=true` and pass the config to `--batching_parameters_file`, [more](https://github.com/tensorflow/serving/blob/master/tensorflow_serving/batching/README.md#batch-scheduling-parameters-and-tuning)

  - CPU-only: One Approach

    If your system is CPU-only (no GPU), then consider starting with the following values: `num_batch_threads` equal to the number of CPU cores; `max_batch_size` to infinity; `batch_timeout_micros` to 0. Then experiment with `batch_timeout_micros` values in the 1-10 millisecond (1000-10000 microsecond) range, while keeping in mind that 0 may be the optimal value.

  - GPU: One Approach

    If your model uses a GPU device for part or all of your its inference work, consider the following approach:

    Set `num_batch_threads` to the number of CPU cores.

    Temporarily set `batch_timeout_micros` to infinity while you tune `max_batch_size` to achieve the desired balance between throughput and average latency. Consider values in the hundreds or thousands.

    For online serving, tune `batch_timeout_micros` to rein in tail latency. The idea is that batches normally get filled to `max_batch_size`, but occasionally when there is a lapse in incoming requests, to avoid introducing a latency spike it makes sense to process whatever's in the queue even if it represents an underfull batch. The best value for `batch_timeout_micros` is typically a few milliseconds, and depends on your context and goals. Zero is a value to consider; it works well for some workloads. (For bulk processing jobs, choose a large value, perhaps a few seconds, to ensure good throughput but not wait too long for the final (and likely underfull) batch.)

    `batch.config`

    ```protobuf
    max_batch_size { value: 1 }
    batch_timeout_micros { value: 0 }
    max_enqueued_batches { value: 1000000 }
    num_batch_threads { value: 8 }
    ```

  - example
    - server

      ```bash
      docker run --rm -p 8500:8500 -p 8501:8501 --mount type=bind,source=$(pwd),target=/models --mount type=bind,source=$(pwd)/config/versionctrl.config,target=/models/versionctrl.config -it tensorflow/serving --model_config_file=/models/versionctrl.config --model_config_file_poll_wait_seconds=60 --enable_batching=true --batching_parameters_file=/models/batch/batchpara.config
      ```

    - client
      - return error `"Task size 2 is larger than maximum batch size 1"`

        ```bash
        $ python3 ClientAPI/python/grpc_request.py -m Toy -v 1
        # Traceback (most recent call last):
        #   File "grpcRequest.py", line 58, in <module>
        #     resp = stub.Predict(request, timeout_req)
        #   File "/Users/yongxiyang/opt/anaconda3/envs/tf2cpu/lib/python3.7/site-packages/grpc/_channel.py", line 824, in __call__
        #     return _end_unary_response_blocking(state, call, False, None)
        #   File "/Users/yongxiyang/opt/anaconda3/envs/tf2cpu/lib/python3.7/site-packages/grpc/_channel.py", line 726, in _end_unary_response_blocking
        #     raise _InactiveRpcError(state)
        # grpc._channel._InactiveRpcError: <_InactiveRpcError of RPC that terminated with:
        #         status = StatusCode.INVALID_ARGUMENT
        #         details = "Task size 2 is larger than maximum batch size 1"
        #         debug_error_string = "{"created":"@1591246233.042335000","description":"Error received from peer ipv4:0.0.0.0:8500","file":"src# /core/lib/surface/call.cc","file_line":1056,"grpc_message":"Task size 2 is larger than maximum batch size 1","grpc_status":3}"
        ```

- monitor: pass file path to `--monitoring_config_file`

    `monitor.config`

    ```protobuf
    prometheus_config {
        enable: true,
        path: "/models/metrics"
    }
    ```

  - request through RESTful API
    - example
      - server

        ```bash
        $ docker run --rm -p 8500:8500 -p 8501:8501 -v "$(pwd):/models" -it tensorflow/serving --model_config_file=/models/config/versionlabels.config --model_config_file_poll_wait_seconds=60 --allow_version_labels_for_unavailable_models --monitoring_config_file=/models/monitor/monitor.config
        ```

      - client

        ```bash
        $ curl -X GET http://localhost:8501/monitoring/prometheus/metrics
        # # TYPE :tensorflow:api:op:using_fake_quantization gauge
        # # TYPE :tensorflow:cc:saved_model:load_attempt_count counter
        # :tensorflow:cc:saved_model:load_attempt_count{model_path="/models/save/Toy/1",status="success"} 1
        # :tensorflow:cc:saved_model:load_attempt_count{model_path="/models/save/Toy/2",status="success"} 1
        # ...
        # # TYPE :tensorflow:cc:saved_model:load_latency counter
        # :tensorflow:cc:saved_model:load_latency{model_path="/models/save/Toy/1"} 54436
        # :tensorflow:cc:saved_model:load_latency{model_path="/models/save/Toy/2"} 45230
        # ...
        # # TYPE :tensorflow:mlir:import_failure_count counter
        # # TYPE :tensorflow:serving:model_warmup_latency histogram
        # # TYPE :tensorflow:serving:request_example_count_total counter
        # # TYPE :tensorflow:serving:request_example_counts histogram
        # # TYPE :tensorflow:serving:request_log_count counter
        ```

  - show monitor data in the prometheus docker
    - modified your own prometheus configuration file

      ```yaml
      # my global config
      global:
        scrape_interval:     15s # Set the scrape interval to every 15 seconds. Default is every 1 minute.
        evaluation_interval: 15s # Evaluate rules every 15 seconds. The default is every 1 minute.
        # scrape_timeout is set to the global default (10s).

      # Alertmanager configuration
      alerting:
        alertmanagers:
        - static_configs:
          - targets:
            # - alertmanager:9093

      # Load rules once and periodically evaluate them according to the global 'evaluation_interval'.
      rule_files:
        # - "first_rules.yml"
        # - "second_rules.yml"

      # A scrape configuration containing exactly one endpoint to scrape:
      # Here it's Prometheus itself.
      scrape_configs:
        - job_name: 'tensorflow'
          scrape_interval: 5s
          metrics_path: '/monitoring/prometheus/metrics'
          static_configs:
      - targets: ['docker.for.mac.localhost:8501'] # for `Mac users`
      # - targets: ['127.0.0.1:8501']
      ```

    - start prometheus docker server

    ```bash
    $ docker run --rm -ti --name prometheus -p 127.0.0.1:9090:9090 -v "$(pwd)/monitor:/tmp" prom/prometheus --config.file=/tmp/prometheus/prome.yaml
    ```

    - access prometheus on the webUI
      - check target and status
      ![target](images/target.png)
      ![status](images/status.png)
      - webUI on [localhost:9090](http://localhost:9090/)
      ![graph](images/prom_graph.png)

  <!-- - request with gRPC TODO: -->

## **Obtain the information**

- get the information data structure.

  ```bash
  curl -d '{"instances": [[1.0, 2.0]]}' -X GET http://localhost:8501/v1/models/Toy/metadata
  ```

- get the information data structure with gRPC

  ```bash
  $ python ClientAPI/python/grpc_metadata.py -m Toy -v 2
  # model_spec {
  #   name: "Toy"
  #   version {
  #     value: 2
  #   }
  # }
  # metadata {
  #   key: "signature_def"
  #   value {
  #     type_url: "type.googleapis.com/tensorflow.serving.SignatureDefMap"
  #     value: "\n\253\001\n\017serving_default\022\227\001\n;\n\007input_1\0220\n\031serving_default_input_1:0\020\001\032\021\022\013\010\377\377\377\377\377\377\377\377\377\001\022\002\010\002\022<\n\010output_1\0220\n\031StatefulPartitionedCall:0\020\001\032\021\022\013\010\377\377\377\377\377\377\377\377\377\001\022\002\010\001\032\032tensorflow/serving/predict\n>\n\025__saved_model_init_op\022%\022#\n\025__saved_model_init_op\022\n\n\004NoOp\032\002\030\001"
  #   }
  # }
  ```

## **Accerleration by GPU**

- pull tensorflow server GPU version from DockerHub.

  ```bash
  docker pull tensorflow/serving:latest-gpu
  ```

- clone the server.git if you haven't done it.

  ```bash
  git clone https://github.com/tensorflow/serving
  ```

- set `--runtime==nvidia` and use the `tensorflow/serving:latest-gpu`

  ```bash
  docker run --runtime=nvidia -p 8501:8501 -v "$(pwd)/${path_to_your_own_models}/1:/models/${user_define_model_name}" -e MODEL_NAME=${user_define_model_name} tensorflow/serving &
  ```

- example

  ```bash
  docker run --runtime=nvidia -p 8501:8501 -v "$(pwd)/save/Toy:/models/Toy" -e MODEL_NAME=Toy tensorflow/serving:latest-gpu &
  or
  nvidia-docker run -p 8501:8501 -v "$(pwd)/save/Toy:/models/Toy" -e MODEL_NAME=Toy tensorflow/serving:latest-gpu &
  or
  docker run --gpu ${all/1} -p 8501:8501 -v "$(pwd)/save/Toy:/models/Toy" -e MODEL_NAME=Toy tensorflow/serving:latest-gpu &
  ```

## Setup client API


- [GO](ClientAPI/go/README.md)
- [Python](ClientAPI/python/README.md)
- [Cpp-cmake](ClientAPI/cpp/cmake/README.md)
- [Cpp-cmake-static-lib](ClientAPI/cpp/cmake-static-lib/README.md)
- [Cpp-make](ClientAPI/cpp/make/README.md)
- [Cpp-make-static-lib](ClientAPI/cpp/make-static-lib/README.md)

## Feature Column and vocabulary file for serving
<!-- TODO: -->

## For production

- [SavedModel Warmup](https://www.tensorflow.org/tfx/serving/saved_model_warmup)
- please see ClientAPI/wramup/warmup.py
- `--enable_model_warmup`: Enables model warmup using user-provided PredictionLogs in assets.extra/ directory

```bash
$ python ClientAPI/wramup/warmup.py # it will generate tf_serving_warmup_requests tfrecords (2.9.2)
$ cp tf_serving_warmup_requests <model_dir>/<version>/assets.extra/tf_serving_warmup_requests
```

The server log:
```log
2022-11-04 06:34:39.419417: I external/org_tensorflow/tensorflow/cc/saved_model/loader.cc:213] Running initialization op on SavedModel bundle at path: /models/save/Toy/2
2022-11-04 06:34:39.426058: I external/org_tensorflow/tensorflow/cc/saved_model/loader.cc:305] SavedModel load for tags { serve }; Status: success: OK. Took 32252 microseconds.
2022-11-04 06:34:39.426708: I tensorflow_serving/servables/tensorflow/saved_model_warmup_util.cc:73] Starting to read warmup data for model at /models/save/Toy/2/assets.extra/tf_serving_warmup_requests with model-warmup-options
2022-11-04 06:34:39.441661: I tensorflow_serving/servables/tensorflow/saved_model_warmup_util.cc:210] Finished reading warmup data for model at /models/save/Toy/2/assets.extra/tf_serving_warmup_requests. Number of warmup records read: 1. Elapsed time (microseconds): 15304.
```

## Advanced Tutorial

### Custom Operation

For custom operation of tensorflow, please refer to the [Create an Op](https://www.tensorflow.org/guide/create_op) and [Serving TensorFlow models with custom ops](https://www.tensorflow.org/tfx/serving/custom_op). However, we only provide a example for custom op and the way to modify the tensorflow server. you can click this link for detail:

[Custom operation examples](CustomOp/README.md)
