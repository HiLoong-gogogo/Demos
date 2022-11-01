#该目录记为module_src
set(module_src src)

#当前目录下所有的源文件赋给source_src
aux_source_directory(. source_src)

include_directories(${CMAKE_SOURCE_DIR}/thirddeps/include)

#编译动态库
add_library(${module_src} STATIC ${source_src})

#指定源文件编译成demo
add_executable(demo main.cpp)
