cmake_minimum_required(VERSION 3.11)
project(arka5bis)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp)
add_executable(arka5bis ${SOURCE_FILES})

INCLUDE_DIRECTORIES(  /usr/local/Cellar/allegro/5.2.4.0/include )
LINK_DIRECTORIES(  /usr/local/Cellar/allegro/5.2.4.0/lib )

file(GLOB LIBRARIES "/usr/local/Cellar/allegro/5.2.4.0/lib/*.dylib")
message("LIBRARIES = ${LIBRARIES}")

TARGET_LINK_LIBRARIES(arka5bis ${LIBRARIES})