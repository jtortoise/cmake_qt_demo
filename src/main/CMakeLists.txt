file(GLOB src_list RELATIVE  ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
#message(STATUS ${src_list})

add_executable(${PROJECT_NAME} ${src_list})
target_link_libraries(${PROJECT_NAME} forms module1)