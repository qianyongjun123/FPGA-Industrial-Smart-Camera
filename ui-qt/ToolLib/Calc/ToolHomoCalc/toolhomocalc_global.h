#ifndef TOOLHOMOCALC_GLOBAL_H
#define TOOLHOMOCALC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TOOLHOMOCALC_LIBRARY)
#  define TOOLHOMOCALCSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TOOLHOMOCALCSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TOOLHOMOCALC_GLOBAL_H