cmake_minimum_required(VERSION 3.26)
project(LinearAlgebraMatrixInverseCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinearAlgebraMatrixInverseCalculator main.cpp
        MatrixFunctions.cpp
        MatrixFunctions.h)
