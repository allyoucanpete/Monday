#ifndef __LIBMONDAY_H
#define __LIBMONDAY_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef int (*test_fn_t)(graal_isolatethread_t*, char*);

typedef char* (*detect_fn_t)(graal_isolatethread_t*, char*);

typedef char* (*parse_fn_t)(graal_isolatethread_t*, char*);

#if defined(__cplusplus)
}
#endif
#endif
