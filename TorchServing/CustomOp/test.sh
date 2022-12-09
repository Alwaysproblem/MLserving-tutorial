#!/bin/bash

bash build.sh

ctest --test-dir build -V
