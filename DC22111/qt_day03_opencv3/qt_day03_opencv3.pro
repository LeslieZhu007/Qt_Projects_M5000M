QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    widget.cpp

HEADERS += \
    widget.h

FORMS += \
    widget.ui


INCLUDEPATH += G:/software/EmbedSys/opencv/opencv3.4-qt-intall/install/include
INCLUDEPATH += G:/software/EmbedSys/opencv/opencv3.4-qt-intall/install/include/opencv
INCLUDEPATH += G:/software/EmbedSys/opencv/opencv3.4-qt-intall/install/include/opencv2
LIBS += G:/software/EmbedSys/opencv/opencv3.4-qt-intall/install/x86/mingw/lib/libopencv_*.a


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


