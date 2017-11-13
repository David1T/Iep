QT += core
QT -= gui

CONFIG += c++11

TARGET = Lab4
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    bcm2835_stub.cpp \
    serial.cpp \
    spi.cpp

HEADERS += \
    bcm2835.h \
    serial.h \
    spi.h
