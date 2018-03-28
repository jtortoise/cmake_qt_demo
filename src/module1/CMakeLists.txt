file(GLOB src_list RELATIVE  ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
#message(STATUS ${src_list})

add_library(module1 ${src_list})
target_link_libraries(module1 Qt5::Core)