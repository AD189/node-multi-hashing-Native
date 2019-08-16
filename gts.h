#ifndef GTS_H
#define GTS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void gts_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
