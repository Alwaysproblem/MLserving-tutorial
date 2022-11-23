add_library(add_index SHARED add_index.cpp)

# Enable C++14
target_compile_features(add_index PRIVATE cxx_std_14)
# Link against LibTorch
target_link_libraries(add_index "${TORCH_LIBRARIES}")
