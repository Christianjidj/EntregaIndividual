cmake_minimum_required(VERSION 3.19)
project(venta LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(venta
    WIN32 MACOSX_BUNDLE
    main.cpp
    calendarwin.cpp
    calendarwin.h
    calendarwin.ui
    newtaskdialog.h newtaskdialog.cpp newtaskdialog.ui
    dayagendadialog.h dayagendadialog.cpp dayagendadialog.ui
)

target_link_libraries(venta
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS venta
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET venta
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
