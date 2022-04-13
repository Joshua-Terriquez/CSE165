TEMPLATE = app
TARGET = name_of_the_app

QT = core gui
QT +=gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES +=  \
    virtualMethods.cpp

HEADERS += \
    Header.h
