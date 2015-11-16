QT += quick qml
QT += widgets

QT += svg
QTPLUGIN += qsvg


SOURCES += src/main.cpp

OTHER_FILES = README.md

RESOURCES += src/papyros-calculator.qrc

CONFIG += staticlib

target.path = /usr/bin

RC_ICONS += icons/papyros-calculator.ico
ICON += icons/papyros-calculator.icns
