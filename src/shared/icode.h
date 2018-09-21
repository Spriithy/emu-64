#ifndef SHARED_ICODE_H
#define SHARED_ICODE_H

enum {
    _NOP,
    _INTERRUPT,
    _BREAKPOINT,
    _UNDEF_3,
    _LB,
    _LBU,
    _LH,
    _LHU,
    _LUI,
    _LW,
    _LWU,
    _LD,
    _SB,
    _SH,
    _SW,
    _SD,
    _UNDEF_16,
    _MFHI,
    _MTHI,
    _MFLO,
    _MTLO,
    _SLT,
    _SLTU,
    _SLTI,
    _SLTIU,
    _EQ,
    _EQI,
    _EQIU,
    _UNDEF_28,
    _UNDEF_29,
    _UNDEF_30,
    _UNDEF_31,
    _OR,
    _ORI,
    _AND,
    _ANDI,
    _XOR,
    _XORI,
    _NOR,
    _SHL,
    _SHLI,
    _SHR,
    _SHRI,
    _ADD,
    _ADDI,
    _ADDIU,
    _SUB,
    _SUBU,
    _MUL,
    _MULU,
    _DIV,
    _DIVU,
    _UNDEF_52,
    _UNDEF_53,
    _PUSHW,
    _PUSH,
    _POPW,
    _POP,
    _CALL,
    _RET,
    _J,
    _JR,
    _JE,
    _JNE,
};

#endif // shared/icode.h
