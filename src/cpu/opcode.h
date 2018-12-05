#ifndef OPCODE_H_
#define OPCODE_H_

////////////////////////////////////////////////////////////////////////////////
//
//   Specifications
//
//
//   I. Atomic values
//
//   +--------+------+--------+
//   |  name  | size | symbol |
//   +--------+------+--------+
//   |   byte |   1  |    b   |
//   |   word |   2  |    w   |
//   |  dword |   4  |    l   |
//   +--------+------+--------+
//
//
//   II. Adressing modes
//
//   R = Register
//   M = Memory
//   I = Immediate
//   O = Offset    (1 signed word)
//   A = Adress
//   t = Atomic value specifier
//
//
//   III. Registers
//
//   +-----------+-----------+------------+------------+
//   | Byte Reg. | Word Reg. | DWord Reg. | QWord Reg. |
//   +-----------+-----------+------------+------------+
//   |     AL    |     AX    |    EAX     |    XMM0    |
//   |     AH    |     CX    |    ECX     |    XMM1    |
//   |     CL    |     DX    |    EDX     |    XMM2    |
//   |     CH    |     BX    |    EBX     |    XMM3    |
//   |     DL    |     SP    |    ESP     |    XMM4    |
//   |     DH    |     BP    |    EBP     |    XMM5    |
//   |     BL    |     SI    |    ESI     |    XMM6    |
//   |     BH    |     DI    |    EDI     |    XMM7    |
//   |           |     IP    |    EIP     |            |
//   |           |           |    R9      |            |
//   |           |           |    R10     |            |
//   |           |           |    R11     |            |
//   |           |           |    R12     |            |
//   |           |           |    R13     |            |
//   |           |           |    R14     |            |
//   |           |           |    R15     |            |
//   +-----------+-----------+------------+------------+
//
//
//
//   0                   1                   2                   3                   4
//   0         1         2         3         4         5         6         7         8
//   0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16
//   +----+----+---------+----+----+---------+----+----+---------+----+----+---------+
//   | AL | AH |         | CL | CH |         | DL | DH |         | BL | BH |         |
//   +----+----+---------+----+----+---------+----+----+---------+----+----+---------+
//   |    AX   |         |    CX   |         |    DX   |         |    BX   |         |
//   +---------+---------+---------+---------+---------+---------+---------+---------+
//   |        EAX        |        ECX        |        EDX        |        EBX        |
//   +-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+
//

enum opcode {

    //
    // mov %eax, 0xff0a
    //
    // xxxx xxxx aarr rrrr iiii ....
    //
    MOV_RI = 0x3a,

    //
    // mov %eax, %ebx
    //
    // xxxx xxxx aarr rrrr aarr rrrr
    //
    MOV_RR,

    //
    // mov %eax, [%ebx + d * %eax + 12345]
    //
    // xxxx xxxx aarr rrrr --rr rrrr
    //
    MOV_RM,

    //
    // mov %eax, %ebx
    //
    // xxxx xxxx aarr rrrr aarr rrrr
    //
    MOV_MI,
    MOV_MR,

    CMP_RI,
    CMP_RR,
    CMP_RM,
    CMP_MI,
    CMP_MR,

    NOP = 0x90,
    HALT,
};

#endif /* OPCODE_H_ */
