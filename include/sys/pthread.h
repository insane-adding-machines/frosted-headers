#ifndef _FROSTED_PTHREAD_H
#define _FROSTED_PTHREAD_H
#include <stdint.h>
#include <sys/types.h>
typedef uint32_t pthread_t;
typedef uint32_t pthread_attr_t;
#define PTHREAD_CREATE_JOINABLE (0)
#define PTHREAD_CREATE_DETACHED (1) 


#endif
