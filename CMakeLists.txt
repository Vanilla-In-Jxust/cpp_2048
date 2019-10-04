cmake_minimum_required(VERSION 3.15)
project(2048)

set(CMAKE_CXX_STANDARD 14)

add_executable(2048 main.cpp

        Define/Define.h
        Define/BlockLocation.h

        Fuction/Fuction.h
        Fuction/Fuction.cpp

        Fuction/Move/Moves.h
        Fuction/Move/Moves.cpp

        Fuction/Check/Check.h
        Fuction/Check/Check.cpp)
