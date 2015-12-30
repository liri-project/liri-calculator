QT += quick qml
QT += widgets

QT += svg
QTPLUGIN += qsvg


SOURCES += src/main.cpp

OTHER_FILES = README.md

RESOURCES += src/liri-calculator.qrc

CONFIG += staticlib

target.path = /usr/bin

RC_ICONS += icons/liri-calculator.ico
ICON += icons/liri-calculator.icns
