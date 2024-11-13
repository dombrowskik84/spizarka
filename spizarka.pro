QT       += core gui sql widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    baseclass.cpp \
    ingredients.cpp \
    kcal.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    qaesencryption.cpp \
    recipes.cpp \
    removeingredients.cpp \
    removerecipes.cpp \
    removeresources.cpp \
    resources.cpp \
    search.cpp \
    shoppinglist.cpp

HEADERS += \
    baseclass.h \
    ingredients.h \
    kcal.h \
    login.h \
    mainwindow.h \
    qaesencryption.h \
    recipes.h \
    removeingredients.h \
    removerecipes.h \
    removeresources.h \
    resources.h \
    search.h \
    shoppinglist.h

FORMS += \
    ingredients.ui \
    kcal.ui \
    login.ui \
    mainwindow.ui \
    recipes.ui \
    removeingredients.ui \
    removerecipes.ui \
    removeresources.ui \
    resources.ui \
    search.ui \
    shoppinglist.ui

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
ANDROID_ABIS = armeabi-v7a arm64-v8a x86 x86_64

# Dodaj flagi dla Androida, jeśli są potrzebne
android {
    CONFIG += c++11
    QMAKE_LFLAGS += -fPIC
    DEFINES += Q_OS_ANDROID
}

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target
