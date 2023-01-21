cmake_minimum_required(VERSION 3.22)
project(objc_practice)
# set(CMAKE_CXX_STANDARD 17)
find_package(Threads REQUIRED)
set(CMAKE_C_FLAGS "-x objective-c")
# set(CMAKE_CXX_FLAGS "-x objective-c++")
# set(CMAKE_EXE_LINKER_FLAGS "-framework Cocoa -framework AppKit -framework CoreData -     framework Foundation")
add_executable(${PROJECT_NAME} src/main.m src/sample.m)
target_link_libraries(${PROJECT_NAME} PUBLIC 
    "-framework Cocoa"
    "-framework AppKit"
    "-framework CoreData"
    "-framework Foundation")
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/header)