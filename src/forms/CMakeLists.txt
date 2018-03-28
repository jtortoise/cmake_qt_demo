file(GLOB src_list RELATIVE  ${CMAKE_CURRENT_SOURCE_DIR} *.ui *.cpp)
#message(STATUS ${src_list})

add_library(forms ${src_list})
target_link_libraries(forms Qt5::Gui Qt5::Widgets)