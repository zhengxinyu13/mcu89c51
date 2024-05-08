/********************************************************************
 * File: 
 * Description: 
 * Version: 
 * Date: 
 * Author: 
 * ---------- Revision History ----------
 * <version>
 * <date>
 * <author>
 * <desc>
 * Modified to be suitable to the new coding rules in all functions.
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
        LED = LOW;
        delay_ms(100);
        LED = HIGH;
        delay_ms(100);
    }
}
