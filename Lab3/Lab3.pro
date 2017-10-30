QT += core
QT -= gui

CONFIG += c++11

TARGET = Lab3
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    bcm2835_stub.cpp \
    pwm.cpp \
    pin.cpp

HEADERS += \
    bcm2835.h \
    pwm.h \
    pin.h
