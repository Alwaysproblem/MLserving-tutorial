# Tensorflow Serving Client API

## **Requiement**

- Docker
- GO (>= 1.11) for go API
- Python for python API

## **Install Docker**

- **Window/MacOS**: install Docker from [DockerHub](https://hub.docker.com/?overlay=onboarding). (*need to register new account if you are newbie*)

- **linux**: install [Docker](https://runnable.com/docker/install-docker-on-linux)

## **Tutorial for starting**

```bash
$ git clone https://github.com/Alwaysproblem/MLserving-tutorial
$ cd MLserving-tutorial/TFserving/
```

## Run Server

- here is no batch configuration only for demonstration

```bash
$ docker run --rm -p 8500:8500 -p 8501:8501 -v `pwd`:/models -it tensorflow/serving --model_config_file=/models/config/versionlabels.config --model_config_file_poll_wait_seconds=60 --allow_version_labels_for_unavailable_models
```

## Test Server

- test for network

```bash
$ curl -d '{"instances": [[1.0, 2.0]]}' -X POST http://localhost:8501/v1/models/Toy_double:predict
```

## Tutorial for gRPC API

- [GO](./go/README.md)
- [Python](./python/README.md)
- [Cpp-cmake](./cpp/cmake/README.md)
- [Cpp-cmake-static-lib](./cpp/cmake-static-lib/README.md)
- [Cpp-make](./cpp/make/README.md)
- [Cpp-make-static-lib](./cpp/make-static-lib/README.md)
