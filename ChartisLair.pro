QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    GUI/catalogoCompleto.cpp \
    GUI/catalogoLista.cpp \
    GUI/controller.cpp \
    GUI/elementoWidget.cpp \
    GUI/inserisci.cpp \
    GUI/menu.cpp \
    GUI/modifica.cpp \
    GUI/popup.cpp \
    GUI/ricerca.cpp \
    biscotti.cpp \
    bong.cpp \
    cioccolata.cpp \
    consumabile.cpp \
    grinder.cpp \
    infusi.cpp \
    main.cpp \
    mainwindow.cpp \
    modello.cpp \
    nonConsumabile.cpp \
    prodotto.cpp \
    vaporizzatore.cpp

HEADERS += \
    DeepPtr.h \
    GUI/catalogoCompleto.h \
    GUI/catalogoLista.h \
    GUI/controller.h \
    GUI/elementoWidget.h \
    GUI/inserisci.h \
    GUI/menu.h \
    GUI/modifica.h \
    GUI/popup.h \
    GUI/ricerca.h \
    biscotti.h \
    bong.h \
    cioccolata.h \
    consumabile.h \
    container.h \
    grinder.h \
    infusi.h \
    mainwindow.h \
    modello.h \
    nonConsumabile.h \
    prodotto.h \
    vaporizzatore.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
