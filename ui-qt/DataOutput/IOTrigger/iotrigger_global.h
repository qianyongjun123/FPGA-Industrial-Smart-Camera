#ifndef IOTRIGGER_GLOBAL_H
#define IOTRIGGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(IOTRIGGER_LIBRARY)
#  define IOTRIGGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define IOTRIGGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // IOTRIGGER_GLOBAL_H
