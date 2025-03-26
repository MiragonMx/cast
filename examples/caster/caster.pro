TARGET = caster
TEMPLATE = app
CONFIG += c++17 console

LIBPATH = $$PWD/lib
#INCLUDEPATH += $$PWD/../../include
LIBS += -L$$LIBPATH/ -lcast

SOURCES += main.cpp
HEADERS += cast.h cast_cb.h cast_def.h cast_export.h
