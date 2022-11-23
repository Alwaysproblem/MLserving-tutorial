"""Test for add_index custom op of pytorch"""
import numpy as np
from numpy.testing import assert_allclose
import torch

torch.ops.load_library("libadd_index.so")
print(torch.ops.my_ops.add_index)

a = torch.randint(1, 10, size=(3, 4), dtype=torch.int32)

print(a)

o = torch.ops.my_ops.add_index(a)

print(o)
print(a + torch.Tensor(list(range(12))).reshape((3, 4)))

assert_allclose(
    o.numpy().astype(np.int32),
    a + torch.Tensor(list(range(12))).reshape((3, 4))
)


def compute(x, y, z):
  x = torch.ops.my_ops.add_index(x)
  x = x.float()
  return x.matmul(y) + torch.relu(z)


inputs = [
    torch.randint(4, 8, size=(8, 8), dtype=torch.int32),
    torch.randn(8, 5),
    torch.randn(8, 5)
]
trace = torch.jit.trace(compute, inputs)
print(trace.graph)
