#项目设置文件
QT       += core gui    #加入项目中的core和gui的项目模块
#core以及gui是Qt用于GUI设计的类库模块
#如果创建的是控制台(console)应用程序，就不需要添加core和gui
#Qt类库以模块的形式组织各种功能的类，根据项目的需求添加相应的类模块
#项目如果需要用到其他类模块的时候，就追加，比如QT+=network sql texttospeech
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
#这是一个条件执行语句，如果Qt版本大于4，就追加widgets
CONFIG += c++11
#使用C++语言的版本11，如果要使用到C++的高级版本，只需追加比如这样: CONFIG+=c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
