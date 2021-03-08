#ifndef ILLUMINA_LOGGING_H
#define ILLUMINA_LOGGING_H

#include <string.h>

#ifdef DEBUG_MODE

#define __FILENAME__ strrchr("/" __FILE__, '/') + 1
#define DEBUG(fmt, args...) do {\
    printf("[%s:%d:%s]: " fmt, __FILENAME__, __LINE__, __func__, ##args);\
    } while (0)

#else

#define DEBUG(...)

#endif //DEBUG_MODE

#define WARN(fmt, args...) do {printf("[WARNING] " fmt, ##args);} while (0)
#define ERROR(fmt, args...) do {\
    fprintf(stderr, "[ERROR] " fmt, ##args);\
    } while (0)

#endif //ILLUMINA_LOGGING_H
