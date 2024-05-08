/*--------------------------------------------------------------------------
STC89C5xRC-rdp.h

Supplemental header files for Low Voltage Flash Atmel AT89C52 and AT89LV52.
--------------------------------------------------------------------------*/

#ifndef __STC89C5xRC_RDP_H__
#define __STC89C5xRC_RDP_H__

/*------------------------------------------------
Byte Registers
------------------------------------------------*/
sfr AUXR  = 0x8E;
sfr AUXR1 = 0xA2;
sfr IPH   = 0xB7;

sfr XICON = 0xC0;

sfr WDT_CONTR = 0xE1;

sfr ISP_DATA  = 0xE2;
sfr ISP_ADDRH = 0xE3;
sfr ISP_ADDRL = 0xE4;
sfr ISP_CMD   = 0xE5;
sfr ISP_TRIG  = 0xE6;
sfr ISP_CONTR = 0xE7;

/*------------------------------------------------
P4 Bit Registers
------------------------------------------------*/
sfr P4 = 0xE8;

sbit P4_0 = 0xE8;
sbit P4_1 = 0xE9;
sbit P4_2 = 0xEA;
sbit P4_3 = 0xEB;
sbit P4_4 = 0xEC;
sbit P4_5 = 0xED;
sbit P4_6 = 0xEE;

#endif