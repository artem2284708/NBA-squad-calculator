cmake_minimum_required(VERSION 3.5)

project(NBA VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Найти и подключить Qt6
find_package(Qt6 REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    east.h east.cpp east.ui
    west.h west.cpp west.ui

    west1.h west1.cpp west1.ui

    loginwindow.h loginwindow.cpp loginwindow.ui
)

# Определение цели проекта
qt_add_executable(NBA
    ${PROJECT_SOURCES}
    other.qrc

)

# Целевая ссылка на библиотеки Qt6 (Widgets и Sql)
target_link_libraries(NBA PRIVATE Qt6::Widgets Qt6::Sql)

# Свойства для MacOS и iOS
if(APPLE)
    set_target_properties(NBA PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
        MACOSX_BUNDLE_GUI_IDENTIFIER "com.example.NBA"
    )
elseif(WIN32)
    set_target_properties(NBA PROPERTIES
        WIN32_EXECUTABLE TRUE
    )
endif()
# Установка цели
include(GNUInstallDirs)
install(TARGETS NBA
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
