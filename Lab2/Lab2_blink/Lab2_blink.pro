QT += core
QT -= gui

CONFIG += c++11

TARGET = Lab2_blink
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    bcm2835_stub.cpp \
    pin.cpps

HEADERS += \
    bcm2835.h \
    pin.h
