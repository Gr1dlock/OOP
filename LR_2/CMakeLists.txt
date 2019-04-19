cmake_minimum_required(VERSION 3.13)
project(LR_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(LR_2 main.cpp basevector.h basevector_impl.h mathvector.h mathvectorspace.h mathvector_impl.h exceptions.h baseiterator.h baseiterator_impl.h vectoriterator.h vectoriterator_impl.h constvectoriterator.h constvectoriterator_impl.h)