#参考：
#https://elloop.github.io/tools/2016-04-10/learning-cmake-2-commands
#https://www.cnblogs.com/52php/p/5681745.html
#https://zhuanlan.zhihu.com/p/92928820
#http://www.biexiaoyu1994.com/%E5%AE%9E%E7%94%A8%E5%B7%A5%E5%85%B7/2019/01/28/cmake/

cmake_minimum_required(VERSION 3.11)
project(MyTestProject VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_COMPILER      "g++")
set(CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS}         -g -Wall -std=c++17")
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS_DEBUG}   -g3")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS}  -lpng -lz")

#增加头文件目录（该目录下只有头文件），如果一个目录下有头文件也有源文件，
#则需要增加模块目录，而不用增加头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

#查找当前目录下的所有源文件, 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
#指定生成目标
add_executable(${PROJECT_NAME} ${DIR_SRCS})
