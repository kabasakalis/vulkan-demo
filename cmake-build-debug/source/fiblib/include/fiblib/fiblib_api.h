
#ifndef fiblib_TEMPLATE_API_H
#define fiblib_TEMPLATE_API_H

#include <fiblib/fiblib_export.h>

#ifdef fiblib_STATIC_DEFINE
#  define fiblib_TEMPLATE_API
#else
#  ifndef fiblib_TEMPLATE_API
#    ifdef fiblib_EXPORTS
        /* We are building this library */
#      define fiblib_TEMPLATE_API
#    else
        /* We are using this library */
#      define fiblib_TEMPLATE_API
#    endif
#  endif

#endif

#endif
