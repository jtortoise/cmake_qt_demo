cmake_minimum_required(VERSION 3.9)
project(cmake_qt)

macro(auto_add_subdir cur_dir)
    #ignore idea project configure dir
    file(GLOB children RELATIVE ${cur_dir} [^.]*)
    #set(dirlist "")
    foreach(child ${children})
        #sure it is dir and has a cmakelist.txt file
        if(IS_DIRECTORY ${cur_dir}/${child} AND EXISTS ${cur_dir}/${child}/CMakeLists.txt)
            #list(APPEND dirlist ${child})
            add_subdirectory(${child})
        endif()
    endforeach()
endmacro()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

#Must set Qt install path(ex:path_to_Qt/bin) to system variable before found Qt package
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

#3td packages install path
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/3td_packages)
find_package(libusb-1.0)
#message(STATUS ${libusb-1.0_FOUND})

include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/cmake_qt_autogen/include)
auto_add_subdir(${CMAKE_CURRENT_SOURCE_DIR})