cmake_minimum_required(VERSION 3.3)
project(cuTDA)

find_package(CUDA REQUIRED)
add_subdirectory(cutda/core/kernels)