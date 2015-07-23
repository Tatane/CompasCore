TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pattern.cpp \
    temps.cpp \
    lecteur.cpp \
    subtemps.cpp \
    gestionxml2.cpp \
    tinyxml2.cpp \
    son.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pattern.h \
    temps.h \
    lecteur.h \
    subtemps.h \
    gestionxml2.h \
    tinyxml2.h \
    son.h


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../_libraries/SFML-2.3.1/monBuild/lib/ -lsfml-audio -lsfml-system
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../_libraries/SFML-2.3.1/monBuild/lib/ -lsfml-audio -lsfml-system

INCLUDEPATH += $$PWD/../_libraries/SFML-2.3.1/include
DEPENDPATH += $$PWD/../_libraries/SFML-2.3.1/monBuild
