cmake_minimum_required(VERSION 3.5)
# Set ARM compiler
# SET(PITOOLS_PATH 
# /home/viacheslav/PiProject/tools/arm-bcm2708/arm-rpi-4.9.3-linux-gnueabihf)

#SET(CMAKE_C_COMPILER arm-linux-gnueabi-gcc)
#SET(CMAKE_CXX_COMPILER arm-linux-gnueabi-g++)



project(Example1 VERSION 0.0.1)

file(GLOB SOURCES Src/*.cpp)
#file(GLOB HEADERS Inc/*.h)

##set(SOURCES 
#main.cpp
#version.cpp
#)
#set(HEADERS
#version.h
#)

##########################################################
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR}/Inc)
##########################################################
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_link_libraries(${PROJECT_NAME} ${CURSES_LIBRARY})


target_include_directories(${PROJECT_NAME} PUBLIC Inc)

set_target_properties(
	${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
	)
