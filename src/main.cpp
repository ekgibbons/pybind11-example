#include <cstdio>

#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/stl.h>

extern "C" {
#include "hello.h"
}

namespace py = pybind11;

void hello(void)
{
  hello_c();
}


PYBIND11_MODULE(_hello_test, m)
{
    m.doc() = "simple test for pybind11";
    m.def("hello", &hello,
          "simple hello world function");
}
