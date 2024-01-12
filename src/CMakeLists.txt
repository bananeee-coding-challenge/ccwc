set(HEADER_LIST "${DemoWCProject_SOURCE_DIR}/include/wc/process.h"
        "${DemoWCProject_SOURCE_DIR}/include/wc/util.h")

add_library(wc process.cpp ${HEADER_LIST} util.cpp)

target_include_directories(wc PUBLIC ../include)
