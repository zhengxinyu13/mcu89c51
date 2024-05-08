/********************************************************************
 * File: bit.h
 * Description: 89C51/89C52 main header files.
 * Version: 1.0
 * Date: 2024-04-25
 * Author: zhengxinyu13@gmail.com
 * ---------- Revision History ----------
 * <version>
 * <date>
 * <author>
 * <desc>
 * Modified to be suitable to the new coding rules in all functions.
 ********************************************************************/

#ifndef __MAIN_H__
#define __MAIN_H__

#include "STC89C5xRC-rdp.h"

#define HIGH        1
#define LOW         0
#define TRUE        1
#define FALSE       0
#define TURN_ON     1
#define TURN_OFF    0

#define SET(pin)    (pin) = 1
#define RESET(pin)  (pin) = 0

typedef unsigned char   uint8_t;
typedef signed char     int8_t;
typedef unsigned int    uint16_t;
typedef signed int      int16_t;
typedef unsigned long   uint32_t;
typedef signed long     int32_t;

#include "delay.h"

#endif // __MAIN_H__
