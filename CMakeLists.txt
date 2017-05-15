cmake_minimum_required( VERSION 3.0 )
project( MON_PROJET )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra")

find_package( PkgConfig REQUIRED )
pkg_check_modules(PKG REQUIRED libglog)
include_directories(${PKG_INCLUDE_DIRS})

add_executable( main.out main.cpp)
target_link_libraries(main.out ${PKG_LIBRARIES})