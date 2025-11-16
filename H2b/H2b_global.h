#ifndef H2B_GLOBAL_H
#define H2B_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(H2B_LIBRARY)
#define H2B_EXPORT Q_DECL_EXPORT
#else
#define H2B_EXPORT Q_DECL_IMPORT
#endif

#endif // H2B_GLOBAL_H
