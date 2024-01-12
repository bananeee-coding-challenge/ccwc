cmake_minimum_required(VERSION 3.12)
project(DemoWCProject
        VERSION 1.0.0
        DESCRIPTION "Demo project for wc"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(app)

