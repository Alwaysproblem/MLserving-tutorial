#!/bin/bash

export TF_SERVING_BUILD_OPTIONS="--config=release"

bazel build --color=yes --curses=yes \
    --verbose_failures \
    ${TF_SERVING_BUILD_OPTIONS} \
    //hashmap:hashmap_source_adapter
