cmake_minimum_required(VERSION 3.13)

project(graphics LANGUAGES CXX)

# set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# place binaries and libraries according to GNU standards
include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

# we cannot analyse results without gcov
find_program(GCOV_PATH gcov)
if(NOT GCOV_PATH)
  message(FATAL_ERROR "Code coverage analysis requires gcov!")
endif()

add_subdirectory(src)
add_subdirectory(test)

enable_testing()