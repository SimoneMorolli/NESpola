//
// Created by KonoDioDa on 12/12/2024.
//

#include "opCodes.h"

uint8_t CLC(Nes* nes)
{
    nes->cpu_.st.c = 0;
    nes->cpu_.pc++;
    return 2;
}

uint8_t CLD(Nes* nes)
{
    nes->cpu_.st.d = 0;
    nes->cpu_.pc++;
    return 2;
}

uint8_t CLI(Nes* nes)
{
    nes->cpu_.st.i = 0;
    nes->cpu_.pc++;
    return 2;
}

uint8_t CLV(Nes* nes)
{
    nes->cpu_.st.v = 0;
    nes->cpu_.pc++;
    return 2;
}

uint8_t DEX(Nes* nes)
{
    nes->cpu_.x--;
    nes->cpu_.st.z = nes->cpu_.x == 0;
    nes->cpu_.st.n = (nes->cpu_.x >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t DEY(Nes* nes)
{
    nes->cpu_.x--;
    nes->cpu_.st.z = nes->cpu_.x == 0;
    nes->cpu_.st.n = (nes->cpu_.x >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}


uint8_t INX(Nes* nes)
{
    nes->cpu_.x++;
    nes->cpu_.st.z = nes->cpu_.x == 0;
    nes->cpu_.st.n = (nes->cpu_.x >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t INY(Nes* nes)
{
    nes->cpu_.y++;
    nes->cpu_.st.z = nes->cpu_.y == 0;
    nes->cpu_.st.n = (nes->cpu_.y >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t JSR(Nes* nes)
{
    nes->memory_.setMemory(nes->cpu_.sp + 0x0100, (nes->cpu_.pc + 3) & 255 );
    nes->cpu_.sp--;
    nes->memory_.setMemory(nes->cpu_.sp + 0x0100, (nes->cpu_.pc + 3) >> 8);
    nes->cpu_.sp--;

    uint8_t low = nes->memory_.getMemory(nes->cpu_.pc + 1);
    uint8_t high = nes->memory_.getMemory(nes->cpu_.pc + 2);

    nes->cpu_.pc = (low & 255) | (high << 8);
    return 6;
}

uint8_t NOP(Nes* nes)
{
    nes->cpu_.pc++;
    return 2;
}

uint8_t SEC(Nes* nes)
{
    nes->cpu_.st.c = 1;
    nes->cpu_.pc++;
    return 2;
}

uint8_t SED(Nes* nes)
{
    nes->cpu_.st.d = 1;
    nes->cpu_.pc++;
    return 2;
}

uint8_t SEI(Nes* nes)
{
    nes->cpu_.st.i = 1;
    nes->cpu_.pc++;
    return 2;
}

uint8_t TAX(Nes* nes)
{
    nes->cpu_.x = nes->cpu_.a;
    nes->cpu_.st.z = nes->cpu_.x == 0;
    nes->cpu_.st.n = (nes->cpu_.x >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t TAY(Nes* nes)
{
    nes->cpu_.y = nes->cpu_.a;
    nes->cpu_.st.z = nes->cpu_.y == 0;
    nes->cpu_.st.n = (nes->cpu_.y >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t TSX(Nes* nes)
{
    nes->cpu_.x = nes->cpu_.sp;
    nes->cpu_.st.z = nes->cpu_.x == 0;
    nes->cpu_.st.n = (nes->cpu_.x >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t TXA(Nes* nes)
{
    nes->cpu_.a = nes->cpu_.x;
    nes->cpu_.st.z = nes->cpu_.a == 0;
    nes->cpu_.st.n = (nes->cpu_.a >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t TXS(Nes* nes)
{
    nes->cpu_.sp = nes->cpu_.x;
    nes->cpu_.st.z = nes->cpu_.sp == 0;
    nes->cpu_.st.n = (nes->cpu_.sp >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}

uint8_t TYA(Nes* nes)
{
    nes->cpu_.a = nes->cpu_.y;
    nes->cpu_.st.z = nes->cpu_.a == 0;
    nes->cpu_.st.n = (nes->cpu_.a >> 7) & 1;

    nes->cpu_.pc++;
    return 2;
}