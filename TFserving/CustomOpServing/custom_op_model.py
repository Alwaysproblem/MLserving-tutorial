"""Save the Custom Op Model"""
import numpy as np
import tensorflow as tf
from tensorflow.keras import Input
from add_index.python.ops.add_index_ops import add_index

inputs = Input(name="data", shape=(4, ))
outputs = add_index(inputs)

m = tf.keras.Model(inputs=inputs, outputs=outputs)

print(m(np.array([1, 3, 4, 5, 6])))

m.save("add_index_serverable/1")
