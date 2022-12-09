#include <torch/script.h>  // One-stop header.

#include <iostream>
#include <memory>

template <typename T>
void add_index_kernel(T* input_data_ptr, int64_t sizes, T* output_data_ptr) {
  for (size_t i = 0; i < sizes; i++) {
    output_data_ptr[i] = input_data_ptr[i] + (T)i;
  }
}

torch::Tensor add_index(torch::Tensor input_tensor) {
  auto output = torch::zeros_like(input_tensor);
  size_t ndim = input_tensor.dim();
  int64_t dims = 1;
  for (size_t i = 0; i < ndim; ++i) {
    dims *= input_tensor.size(i);
  }
  AT_DISPATCH_ALL_TYPES(input_tensor.scalar_type(), "add_index", ([&] {
                          add_index_kernel<scalar_t>(
                              input_tensor.data_ptr<scalar_t>(), dims,
                              output.data_ptr<scalar_t>());
                        }));
  return output.clone();
}

TORCH_LIBRARY(my_ops, m) { m.def("add_index", &add_index); }
