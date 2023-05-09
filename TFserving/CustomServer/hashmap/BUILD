# Description: Tensorflow Serving hashmap servable.

load("@com_github_tensorflow_serving//tensorflow_serving:serving.bzl", "serving_proto_library")

# package(
#     default_visibility = ["@com_github_tensorflow_serving//tensorflow_serving:internal"],
#     features = ["-layering_check"],
# )

licenses(["notice"])

filegroup(
    name = "all_files",
    srcs = glob(
        ["**/*"],
        exclude = [
            "**/METADATA",
            "**/OWNERS",
            "g3doc/sitemap.md",
        ],
    ),
)

cc_library(
    name = "hashmap_source_adapter",
    srcs = ["hashmap_source_adapter.cc"],
    hdrs = ["hashmap_source_adapter.h"],
    visibility = [
        "//visibility:public",
    ],
    deps = [
        ":hashmap_source_adapter_cc_proto",
        "@com_github_tensorflow_serving//tensorflow_serving/core:simple_loader",
        "@com_github_tensorflow_serving//tensorflow_serving/core:source_adapter",
        "@com_github_tensorflow_serving//tensorflow_serving/core:storage_path",
        "@org_tensorflow//tensorflow/core:lib",
        "@org_tensorflow//tensorflow/core:tensorflow",
    ],
)

cc_test(
    name = "hashmap_source_adapter_test",
    size = "medium",
    srcs = ["hashmap_source_adapter_test.cc"],
    deps = [
        ":hashmap_source_adapter",
        ":hashmap_source_adapter_cc_proto",
        "@com_github_tensorflow_serving//tensorflow_serving/core:loader",
        "@com_github_tensorflow_serving//tensorflow_serving/core:servable_data",
        "@com_github_tensorflow_serving//tensorflow_serving/core/test_util:test_main",
        "@com_github_tensorflow_serving//tensorflow_serving/util:any_ptr",
        "@org_tensorflow//tensorflow/core:lib",
        "@org_tensorflow//tensorflow/core:test",
    ],
    visibility = [
        "//visibility:public",
    ],
)

serving_proto_library(
    name = "hashmap_source_adapter_proto",
    srcs = ["hashmap_source_adapter.proto"],
    cc_api_version = 2,
)
