#ifndef ILLUMINA_DEBUG_H
#define ILLUMINA_DEBUG_H

#include <string.h>

#ifdef DEBUG_MODE

#define __FILENAME__ strrchr("/" __FILE__, '/') + 1
#define DEBUG(fmt, args...) do {\
    printf("[%s:%d:%s]: " fmt, __FILENAME__, __LINE__, __func__, ##args);\
    } while (0)

#else

#define DEBUG(...)

#endif //DEBUG_MODE

#endif //ILLUMINA_DEBUG_H
