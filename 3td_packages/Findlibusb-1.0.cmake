find_path(libusb-1.0_INCLUDE_DIR libusb-1.0/libusb.h)
find_library(libusb-1.0_LIBRARY libusb-1.0.a)
#message(${libusb-1.0_INCLUDE_DIR})
#message(${libusb-1.0_LIBRARY})

#FIND_PACKAGE_HANDLE_STANDARD_ARGS(libusb-1.0 libusb-1.0_LIBRARY libusb-1.0_INCLUDE_DIR)

if(libusb-1.0_INCLUDE_DIR AND libusb-1.0_LIBRARY)
    set(libusb-1.0_FOUND 1)
    include_directories(${libusb-1.0_INCLUDE_DIR})
else(libusb-1.0_INCLUDE_DIR AND libusb-1.0_LIBRARY)
    set(libusb-1.0_FOUND 0)
    if(libusb-1.0_FOUND_REQUIRED)
        message(FATAL_ERROR "Can not found libusb-1.0 library")
    endif(libusb-1.0_FOUND_REQUIRED)
endif(libusb-1.0_INCLUDE_DIR AND libusb-1.0_LIBRARY)

