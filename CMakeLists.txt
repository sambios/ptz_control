cmake_minimum_required(VERSION 3.2)

project(ptzdemo)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH $ENV{QTDIR})

find_package(Qt5Widgets)

set(link_libs Qt5::Widgets)

add_executable(ptz_demo kdpreset.cpp
        kdptz_gui.cpp
        kdptzaux.cpp
        kdptzbasic.cpp
        kdptzcruise.cpp
        kdptzctrl.cpp
        kdptzpattern.cpp
        kvlabel.cpp
        )
target_link_libraries(ptz_demo ${link_libs})
