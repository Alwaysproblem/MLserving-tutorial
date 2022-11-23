#include <torch/script.h>  // One-stop header.

#include <iostream>
#include <memory>

template <typename T>
torch::Tensor add_index(torch::Tensor input_tensor) {
  using std::cout;
  using std::endl;
  size_t ndim = input_tensor.dim();
  int64_t dims = 1;
  for (size_t i = 0; i < ndim; ++i) {
    dims *= input_tensor.size(i);
  }
  T* p = input_tensor.data_ptr<T>();
  std::vector<T> output_tensor_data(dims);
  for (size_t i = 0; i < dims; i++) {
    output_tensor_data[i] = p[i] + (T)i;
  }

  torch::Tensor output = torch::from_blob(
      /*data=*/(void*)output_tensor_data.data(),
      /*sizes=*/input_tensor.sizes(),
      /*options=*/input_tensor.options());
  return output.clone();
}

TORCH_LIBRARY(my_ops, m) {
  m.def("add_index", &add_index<int>);
  // m.def("add_index", &add_index<float>);
}
