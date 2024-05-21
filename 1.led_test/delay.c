/********************************************************************
 * File: delay.h
 * Description: Delay function library based on 11.0592MHz
 * crystal oscillator.
 * Version: 1.0
 * Date: 2023-07-17
 * Author: zhengxinyu13@gmail.com
 * ---------- Revision History ----------
 * <version> <date> <author> <desc>
 * 
 ********************************************************************/

#include "delay.h"

/**
 * @brief Delay function in milliseconds.
 * @param Enter the delay time in milliseconds.
 */
void delay_ms(uint16_t xms)
{
    uint16_t i,j;
    for (i = 0; i < xms; i++)
        for (j = 0; j < 112; j++);
}

/**
 * @brief Delay by one second.
 */
void delay_1s(void)
{
    uint8_t i, j, k;

    _nop_();
    i = 8;
    j = 1;
    k = 243;
    do {
        do {
            while (--k);
        } while (--j);
    } while (--i);
}