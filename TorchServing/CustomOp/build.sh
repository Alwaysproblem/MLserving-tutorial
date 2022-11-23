#!/bin/bash

rm -rf build
mkdir -p build
cd build
cmake .. -GNinja -DCMAKE_PREFIX_PATH="$(python -c 'import torch.utils; print(torch.utils.cmake_prefix_path)')"
ninja
