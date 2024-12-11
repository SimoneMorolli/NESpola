#ifndef MEMORY_H
#define MEMORY_H
#include <cstdint>
#include "Cartridge.h"


class Memory {
    private:
        uint8_t ram[0x0800];
        uint8_t ppu[0x0008];
        uint8_t apuIO[0x0018];
        uint8_t apuIOFunction[0x0008];
        Cartridge cartridge_;
    public:
        Memory();

        uint8_t getMemory(uint16_t addr);
        void setMemory(uint16_t addr, uint8_t value);
};

#endif //MEMORY_H
