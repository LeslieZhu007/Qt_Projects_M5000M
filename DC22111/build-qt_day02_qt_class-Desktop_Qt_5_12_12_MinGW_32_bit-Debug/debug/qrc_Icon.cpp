/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.12.12
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // D:/Projects/QtProjects/DC22111/qt_day02_qt_class/01.jpg
  0x0,0x0,0x0,0x26,
  0x3c,
  0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x52,0x43,0x43,0x3e,0xd,0xa,0x3c,
  0x52,0x43,0x43,0x20,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x3d,0x22,0x31,0x2e,0x30,
  0x22,0x2f,0x3e,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // 01.jpg
  0x0,0x6,
  0x3,0x34,0x51,0x67,
  0x0,0x30,
  0x0,0x31,0x0,0x2e,0x0,0x6a,0x0,0x70,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/01.jpg
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x86,0xbb,0xd,0x0,0x32,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_Icon)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_Icon)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Icon)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Icon)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_Icon)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Icon)(); }
   } dummy;
}
