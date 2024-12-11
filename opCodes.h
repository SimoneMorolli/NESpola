//
// Created by KonoDioDa on 12/12/2024.
//

#ifndef OPCODES_H
#define OPCODES_H
#include <cstdint>
#include "Nes.h"

uint8_t ADC(Nes *nes);
uint8_t AND(Nes *nes);
uint8_t ASL(Nes *nes);
uint8_t BCC(Nes *nes);
uint8_t BCS(Nes *nes);
uint8_t BEQ(Nes *nes);
uint8_t BIT(Nes *nes);
uint8_t BMI(Nes *nes);
uint8_t BNE(Nes *nes);
uint8_t BPL(Nes *nes);
uint8_t BRK(Nes *nes);
uint8_t BVC(Nes *nes);
uint8_t BVS(Nes *nes);
uint8_t CLC(Nes *nes);
uint8_t CLD(Nes *nes);
uint8_t CLI(Nes *nes);
uint8_t CLV(Nes *nes);
uint8_t CMP(Nes *nes);
uint8_t CPX(Nes *nes);
uint8_t CPY(Nes *nes);
uint8_t DEC(Nes *nes);
uint8_t DEX(Nes *nes);
uint8_t DEY(Nes *nes);
uint8_t EOR(Nes *nes);
uint8_t INC(Nes *nes);
uint8_t INX(Nes *nes);
uint8_t INY(Nes *nes);
uint8_t JMP(Nes *nes);
uint8_t JSR(Nes *nes);
uint8_t LDA(Nes *nes);
uint8_t LDX(Nes *nes);
uint8_t LDY(Nes *nes);
uint8_t LSR(Nes *nes);
uint8_t NOP(Nes *nes);
uint8_t ORA(Nes *nes);
uint8_t PHA(Nes *nes);
uint8_t PHP(Nes *nes);
uint8_t PLA(Nes *nes);
uint8_t PLP(Nes *nes);
uint8_t ROL(Nes *nes);
uint8_t ROR(Nes *nes);
uint8_t RTI(Nes *nes);
uint8_t RTS(Nes *nes);
uint8_t SBC(Nes *nes);
uint8_t SEC(Nes *nes);
uint8_t SED(Nes *nes);
uint8_t SEI(Nes *nes);
uint8_t STA(Nes *nes);
uint8_t STX(Nes *nes);
uint8_t STY(Nes *nes);
uint8_t TAX(Nes *nes);
uint8_t TAY(Nes *nes);
uint8_t TSX(Nes *nes);
uint8_t TXA(Nes *nes);
uint8_t TXS(Nes *nes);
uint8_t TYA(Nes *nes);

#endif //OPCODES_H
