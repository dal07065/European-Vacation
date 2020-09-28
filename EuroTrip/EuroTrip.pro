QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

QT += positioning

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    city.cpp \
    customplan.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    user.cpp

HEADERS += \
    city.h \
    customplan.h \
    login.h \
    mainwindow.h \
    user.h

FORMS += \
    customplan.ui \
    login.ui \
    mainwindow.ui

TRANSLATIONS += \
    EuroTrip_en_US.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    C:/Users/natra/Desktop/Speech sources/European Distances and Foods.txt \
    European Distances and Foods.txt

RESOURCES += \
    Resources.qrc
