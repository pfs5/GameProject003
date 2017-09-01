cmake_minimum_required(VERSION 3.7)
project(GameProject003)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp main/Display.cpp main/Display.h main/Application.cpp main/Application.h util/Util.h)
add_executable(GameProject003 ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(GameProject003 ${SFML_LIBRARIES})
endif()