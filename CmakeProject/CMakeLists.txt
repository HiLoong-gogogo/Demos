#指定cmake最低版本号
cmake_minimum_required(VERSION 3.0)

#指定项目名称
project(CmakeProjDemo)

#指定可执行文件的输出路径位bin目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

#指定子目录
add_subdirectory(src)