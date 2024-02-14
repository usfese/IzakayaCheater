cmake_minimum_required(VERSION 3.5.0)
project(IzakayaCheater VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(SRCS main.cpp ui/ui.cpp MyMainFrame.cpp utils.cpp)

add_executable(IzakayaCheater ${SRCS})

find_package(wxWidgets 3.2 REQUIRED COMPONENTS core base net gl)
if(wxWidgets_FOUND)
    include(${wxWidgets_USE_FILE})
    target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
endif()

set(CMAKE_CXX_FLAGS "-mwindows -std=c++11 ${CMAKE_CXX_FLAGS}")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
