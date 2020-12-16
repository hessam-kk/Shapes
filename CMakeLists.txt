cmake_minimum_required(VERSION 3.0)

project (Shape)

set(SOURCES
    src/main.cpp
    src/shape.cpp
    src/Circle.cpp
    src/rect.cpp
    src/triangle.cpp
    src/polygon.cpp
    src/func.cpp
)

add_executable(app ${SOURCES})

include_directories( include )
