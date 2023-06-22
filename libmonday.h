#ifndef __LIBMONDAY_H
#define __LIBMONDAY_H

#include <graal_isolate.h>


#if defined(__cplusplus)
extern "C" {
#endif

int test(graal_isolatethread_t*, char*);

char* detect(graal_isolatethread_t*, char*);

char* parse(graal_isolatethread_t*, char*);

#if defined(__cplusplus)
}
#endif
#endif
