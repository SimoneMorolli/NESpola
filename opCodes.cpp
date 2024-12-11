//
// Created by KonoDioDa on 12/12/2024.
//

#include "opCodes.h"

uint8_t NOP(Nes* nes)
{
    nes->cpu_.pc++;
    return 2;
}

uint8_t JSR(Nes* nes)
{
    return 6;
}

