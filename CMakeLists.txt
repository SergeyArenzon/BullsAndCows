cmake_minimum_required(VERSION 3.13)
project(c___as4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(c___as4
        badkan.hpp
        CompileError1.cpp
        CompileError2.cpp
        Demo.cpp
        DummyChoosers.cpp
        DummyChoosers.hpp
        DummyGuessers.cpp
        DummyGuessers.hpp
        Makefile
        play.cpp
        play.hpp
        readme.pdf
        Test.cpp calculate.cpp calculate.hpp Chooser.cpp Chooser.hpp Guesser.cpp Guesser.hpp)
