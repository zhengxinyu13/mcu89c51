/********************************************************************
 * File: main.c
 * Description: LED flashing test.
 * Version: v0.0
 * Date: 2024-5-21
 * Author: zhengxinyu13@qq.com
 * ---------- Revision History ----------
 * <version> <date> <author> <desc>
 * 
 ********************************************************************/

#include "main.h"

/* User Code Includes */

/* User Code Define */
#define LED P37

/* User Code Global Variables */

/* User Code Function prototypes */


/* ------------------------------ Division Line ------------------------------ */

/**
 * @brief Initialize all configured.
 */
void setup(void)
{
    /* put your setup code here, to run once: */
    LED = HIGH;
}

/**
 * @brief The application entry point.
 */
void main(void)
{
    /* Private variables */
    
    /* Initialize */
    setup();
	/* Infinite loop */
    while (TRUE){
        /* put your main code here, to run repeatedly: */
        delay_1s();
        LED = LOW;
        delay_ms(100);
        LED = HIGH;
        delay_ms(400);
    }
}
