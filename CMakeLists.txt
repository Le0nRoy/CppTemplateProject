cmake_minimum_required(VERSION 3.14)
project(!_TEMPLATE_PROJECT_!)

set(CMAKE_CXX_STANDARD 11)

set(ExecutableName _TEMPLATE_EXECUTABLE_)
# Name of lib for tests should be same as project name in order to get src dir
set(MAIN_LIB_NAME ${PROJECT_NAME})
message("Configuring ${ExecutableName}...")

# Include block
include_directories(include)
# Compile block
set( SRC
     )
set( HEADERS
	 )

add_library(${MAIN_LIB_NAME}
        ${SRC}
        ${HEADERS}
        )

# Uncomment to build executable
# FIXME in current state executable can't be build with tests
#add_executable(${ExecutableName}
#        src/main.cpp
#        ${SRC}
#        ${HEADERS}
#        )

# Link block

# Test block
add_subdirectory(tests)

message("Finished configuring ${ExecutableName}!")
