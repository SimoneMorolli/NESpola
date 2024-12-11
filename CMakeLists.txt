cmake_minimum_required(VERSION 3.30)
project(NESpola)

set(CMAKE_CXX_STANDARD 11)

add_executable(NESpola main.cpp
        Nes.cpp
        Nes.h
        Cpu.cpp
        Cpu.h
        Memory.cpp
        Memory.h
        Cartridge.cpp
        Cartridge.h
        opCodes.cpp
        opCodes.h
)
