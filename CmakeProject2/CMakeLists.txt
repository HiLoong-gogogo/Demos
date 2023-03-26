cmake_minimum_required(VERSION 3.0)

project(CmakeProjDemo)

set (${CMAKE_CXX_STANDARD} 14)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_LIST_DIR}/bin)

include(${CMAKE_CURRENT_LIST_DIR}/src/src.cmake)

add_executable(demo ${SOURCES} ${CMAKE_CURRENT_LIST_DIR}/main.cpp ${HEADERS})