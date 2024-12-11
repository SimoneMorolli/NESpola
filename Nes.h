#include "Cpu.h"
#include "Memory.h"
#ifndef NES_H
#define NES_H



class Nes {
    public:
        Cpu cpu_;
        Apu apu_;
        Ppu ppu_;
        Memory memory_;
};



#endif //NES_H
