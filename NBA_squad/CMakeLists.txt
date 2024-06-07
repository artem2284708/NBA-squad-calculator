cmake_minimum_required(VERSION 3.5)

project(NBA VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(NBA
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        other.qrc
        east.h east.cpp east.ui
        west.h west.cpp west.ui
        east1.h east1.cpp east1.ui
        east2.h east2.cpp east2.ui
        east3.h east3.cpp east3.ui
        east4.h east4.cpp east4.ui
        east5.h east5.cpp east5.ui
        east6.h east6.cpp east6.ui
        east7.h east7.cpp east7.ui
        east8.h east8.cpp east8.ui
        east9.h east9.cpp east9.ui
        east10.h east10.cpp east10.ui
        east11.h east11.cpp east11.ui
        east12.h east12.cpp east12.ui
        east13.h east13.cpp east13.ui
        east14.h east14.cpp east14.ui
        east15.h east15.cpp east15.ui
        west1.h west1.cpp west1.ui
        west2.h west2.cpp west2.ui
        west3.h west3.cpp west3.ui
        west4.h west4.cpp west4.ui
        west5.h west5.cpp west5.ui
        west6.h west6.cpp west6.ui
        west7.h west7.cpp west7.ui
        west8.h west8.cpp west8.ui
        west9.h west9.cpp west9.ui
        west10.h west10.cpp west10.ui
        west11.h west11.cpp west11.ui
        west12.h west12.cpp west12.ui
        west13.h west13.cpp west13.ui
        west14.h west14.cpp west14.ui
        west15.h west15.cpp west15.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET NBA APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(NBA SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(NBA
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(NBA PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.NBA)
endif()
set_target_properties(NBA PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS NBA
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(NBA)
endif()
