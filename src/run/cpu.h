#ifndef EMU64_H
#define EMU64_H

#include "../common.h"
#include "../decode.h"
#include <stdint.h>

typedef struct {
    uint8_t   mem[64 * 1024 * 1024];
    uint64_t  reg[32];
    uint64_t  hi, lo;
    uint64_t  cycles;
    uint32_t* code;
    uint32_t* ip;
#if DEBUG
    int    step_mode;
    char** labels;
#endif
} cpu_t;

void exec(void);

#endif // cpu.h