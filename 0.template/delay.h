/********************************************************************
 * File: delay.h
 * Description: Time delay function based on 11.0592MHz crystal
 * oscillator.
 * crystal oscillator.
 * Version: 1.0
 * Date: 2023-07-17
 * Author: zhengxinyu13@gmail.com
 * ---------- Revision History ----------
 * <version> <date> <author> <desc>
 * 
 ********************************************************************/

#ifndef __DELAY_H__
#define __DELAY_H__

#include "main.h"
#include "intrins.h"

void delay_ms(uint16_t xms);
void delay_1s(void);

#endif // __DELAY_H__
 