# Custom Operations for Tensorflow and Tensorflow serving

This is an example for integration a custom operation to tensorflow and tensorflow serving. For simplification, we take the operation system with ubuntu 20.04 and python 3.8 and gcc/g++ 9.4. The basic tools for bazel is `bazelisk`. For tensorflow version, we take version 2.10 and tfserving 2.10 since the tensorflow APIs are intend to be stable. The custom operation will be the CPU add_index operation. In order to integrate custom operation, we need to set up a environment of building source code of tensorflow and tensorflow server. The procedures of this are listed here:

1. Setup environment successfully (can build tensorflow and tensorflow serving from source code)
2. Create an operation for tensorflow. (from repo [custom-op](https://github.com/tensorflow/custom-op))
3. Integrate the custom op into tensorflow serving
4. initialize server and test the custom op.

## Create an op for Tensorflow

### Environment setup tutorial

- clone this repo

```bash
$ git clone https://github.com/Alwaysproblem/MLserving-tutorial.git
$ cd MLserving-tutorial/TFserving/CustomOp
```

- The code from `custom-op` is modified from the [custom-op](https://github.com/tensorflow/custom-op). you can also clone the template and change the code.

```bash
$ git clone https://github.com/tensorflow/custom-op.git
```

- install gcc/g++

```bash
apt update -y
apt install g++-9 gcc-9 -y
update-alternatives --install /usr/local/bin/g++ g++ /usr/bin/g++-9 90
update-alternatives --install /usr/local/bin/gcc gcc /usr/bin/gcc-9 90
apt install rsync -y
```

- Install python

```bash
$ sudo apt install python3-dev python3-pip
$ pip install -U --user pip numpy wheel packaging requests opt_einsum
$ pip install -U --user keras_preprocessing --no-deps
```

- create an virtual environment (optional)

```bash
$ conda create -n build python=3.8 -y
$ conda activate build
$ pip install -U --user pip numpy wheel packaging requests opt_einsum
$ pip install -U --user keras_preprocessing --no-deps
```

- Install Bazel

```bash
$ wget https://github.com/bazelbuild/bazelisk/releases/download/v1.15.0/bazelisk-linux-amd64
$ mv bazelisk-linux-amd64 /usr/local/bin/bazel
$ bazel help

# WARNING: Invoking Bazel in batch mode since it is not invoked from within a workspace (below a directory having a WORKSPACE file).
#                                                            [bazel release 5.3.2]
# Usage: bazel <command> <options> ...

# Available commands:
#   analyze-profile     Analyzes build profile data.
#   aquery              Analyzes the given targets and queries the action graph.
#   build               Builds the specified targets.
#   canonicalize-flags  Canonicalizes a list of bazel options.
#   clean               Removes output files and optionally stops the server.
#   coverage            Generates code coverage report for specified test targets.
#   cquery              Loads, analyzes, and queries the specified targets w/ configurations.
#   dump                Dumps the internal state of the bazel server process.
#   fetch               Fetches external repositories that are prerequisites to the targets.
#   help                Prints help for commands, or the index.
#   info                Displays runtime info about the bazel server.
#   license             Prints the license of this software.
#   mobile-install      Installs targets to mobile devices.
#   print_action        Prints the command line args for compiling a file.
#   query               Executes a dependency graph query.
#   run                 Runs the specified target.
#   shutdown            Stops the bazel server.
#   sync                Syncs all repositories specified in the workspace file
#   test                Builds and runs the specified test targets.
#   version             Prints version information for bazel.

# Getting more help:
#   bazel help <command>
#                    Prints help and options for <command>.
#   bazel help startup_options
#                    Options for the JVM hosting bazel.
#   bazel help target-syntax
#                    Explains the syntax for specifying targets.
#   bazel help info-keys
#                    Displays a list of keys used by the info command.
```

- Enter the custom-op dir

```bash
cd custom-op
```

- configure the application

```bash
$ bash ./configure.sh # all yes!
```

- test for env

```bash
bazel test //tensorflow_zero_out:zero_out_ops_py_test
```

### Create an Op

- Build wheel

```bash
bazel build //:build_pip_pkg
bazel-bin/build_pip_pkg artifacts
ls artifacts
# tensorflow_custom_ops-*.whl
```

- Install custom ops wheel to the virtual env

```bash
python -m pip install artifacts/tensorflow_custom_ops-*.whl
```
