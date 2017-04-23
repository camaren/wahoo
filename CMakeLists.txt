cmake_minimum_required(VERSION 3.7)
project(wahoo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Person.h Person.cpp TestPerson.cpp DatasimDate.cpp DatasimDate.hpp)
add_executable(wahoo ${SOURCE_FILES})

link_directories(/Users/camaren/Desktop/9780470015384/Utilities/DataAndTime/DatasimDate.hpp)