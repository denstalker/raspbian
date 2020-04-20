cmake_minimum_required(VERSION 3.5)
# Set ARM compiler
# SET(PITOOLS_PATH 
# /home/viacheslav/PiProject/tools/arm-bcm2708/arm-rpi-4.9.3-linux-gnueabihf)
 
SET(CMAKE_C_COMPILER arm-linux-gnueabi-gcc)
SET(CMAKE_CXX_COMPILER arm-linux-gnueabi-g++)



project(Example1 VERSION 0.0.1)



set(SOURCES 
    main.cpp
    version.cpp
)
set(HEADERS
    version.h
)
find_package(Boost REQUIRED)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

# find_package(Curses REQUIRED)
# include_directories(${CURSES_INCLUDE_DIR})
#--------------------------Создание библиотеки -------------------------------------
#Генерация библиотеки Boost 
#-----------------------------------------------------------------------------------
# add_library(${PROJECT_NAME}_lib STATIC 
#         boost_1_72_0/libs/random/src/random_device.cpp
# )
# target_include_directories(${PROJECT_NAME}_lib
#     PUBLIC
#         ${PROJECT_SOURCE_DIR}/boost_1_72_0/boost
# )
#-------------------------Создание исполняемого файла------------------------------

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME}  LINK_PUBLIC ${Boost_LIBRARIES} )
# target_link_libraries(${PROJECT_NAME} LINK_PUBLIC ${CURSES_LIBRARIES})
# target_link_libraries(${PROJECT_NAME}
#     PRIVATE
#         ${PROJECT_NAME}_lib
# )
set_target_properties(
    ${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    
)