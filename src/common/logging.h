#ifndef ILLUMINA_LOGGING_H
#define ILLUMINA_LOGGING_H

#include <stdio.h>
#include <string.h>

#define __FILENAME__ strrchr("/" __FILE__, '/') + 1

#ifdef DEBUG_MODE

#define DEBUG(fmt, args...)\
    do {\
        printf("[%s:%d:%s] " fmt "\n",\
               __FILENAME__, __LINE__, __func__, ##args);\
    } while (0)

#define ERROR(fmt, args...)\
    do {\
        fprintf(stderr, "[ERROR] " fmt "\n", ##args);\
        DEBUG("[ERROR] " fmt, ##args);\
    } while (0)

#else

#define DEBUG(...)

#define WARN(fmt, args...) do {printf("[WARNING] " fmt "\n", ##args);} while (0)
#define ERROR(fmt, args...)\
    do {\
        fprintf(stderr, "[ERROR] " fmt "\n", ##args);\
    } while (0)

#endif //DEBUG_MODE

#endif //ILLUMINA_LOGGING_H
