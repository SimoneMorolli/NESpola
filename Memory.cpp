#include "Memory.h"
#include <memory>
#include <bits/predefined_ops.h>

void Memory::setMemory(uint16_t addr, uint8_t value)
{
    switch (addr){
        case 0x000 ... 0x1FFF:
            ram[addr & 0x07FF] = value;
            break;
        case 0x2000 ... 0x3FFF:
            ppu[addr & 0x0007] = value;
            break;
        case 0x4000 ... 0x4017:
            apuIO[addr] = value;
            break;
        case 0x4018 ... 0x401F:
            apuIOFunction[addr] = value;
            break;
        default:
            break;
    }
}

uint8_t Memory::getMemory(uint16_t addr)
{
    switch (addr){
    case 0x000 ... 0x1FFF:
        return ram[addr & 0x07FF];
    case 0x2000 ... 0x3FFF:
        return ppu[addr & 0x0007];
    case 0x4000 ... 0x4017:
        return apuIO[addr];
    case 0x4018 ... 0x401F:
        return apuIOFunction[addr];
    case 0x8000 ... 0xFFFF:
        return ram[addr];
    default:
        return 0xFF;
    }
}
