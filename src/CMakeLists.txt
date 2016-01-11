file(GLOB_RECURSE SOURCES *.cpp *.h liri-calculator.qrc)

add_executable(liri-calculator ${SOURCES})
target_link_libraries(liri-calculator
                      Qt5::Core
                      Qt5::Qml
                      Qt5::Quick)

install(TARGETS liri-calculator
        DESTINATION ${CMAKE_INSTALL_BINDIR})
