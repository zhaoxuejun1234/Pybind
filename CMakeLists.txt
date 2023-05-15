cmake_minimum_required(VERSION 3.9)
project(Pybind)

find_package(PythonLibs REQUIRED)
find_package(pybind11 REQUIRED)
set(CMAKE_CXX_STANDARD 14)

#add_subdirectory(pybind11)
pybind11_add_module(libadd_ _lib.cpp) #pybind库的生成不能单纯的以.so来看待