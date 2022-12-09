find_package(
  Python
  COMPONENTS Interpreter
  REQUIRED)

add_test(
  NAME add_index_test
  COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/add_index_test.py
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/build/src)

add_test(
  NAME add_index_float_test
  COMMAND ${Python_EXECUTABLE}
          ${CMAKE_CURRENT_SOURCE_DIR}/add_index_float_test.py
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/build/src)
