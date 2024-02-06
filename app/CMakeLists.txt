add_executable(ccwc app.cpp)

target_link_libraries(ccwc PRIVATE wc)

#install(TARGETS ccwc DESTINATION )