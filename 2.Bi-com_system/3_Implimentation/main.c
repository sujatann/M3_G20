/* Group20-Sujjata,Nityasri,Shubash main file*/

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "own_drivers_and_func.h"
#include <stdio.h>

static void window_status(void);			   // Turn on all the LED's at once
static void alarm_status(void);		   // Turn off all the LED's at once
static void door_status(void);  // on and off LED's with  delay (in anti-clockwise)
static void car_battery_info(void); // on and off LED's with  delay (in clockwise)

static void window_status(void) 
{
	led_on(LED_ORANGE);
	led_on(LED_GREEN);
	led_on(LED_RED);
	led_on(LED_BLUE);
}


static void alarm_status(void) 
{
	led_off(LED_ORANGE);
	led_off(LED_GREEN);
	led_off(LED_RED);
	led_off(LED_BLUE);
}
static void car_battery_info(void) 
{

	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}

static void door_status(void) 
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}


int main(void)
{
	led_init_all();
	button_init();

	while (1)
	{
		volatile int btncnt = btn_press();
		if (btncnt == 1)
		{ 
			window_status();
			btncnt = 0;
		}
		else if (btncnt == 2)
		{ 
			alarm_status();
			btncnt = 0;
		}
		else if (btncnt == 3)
		{ 
			car_battery_info();

			btncnt = 0;
		}
		else if (btncnt == 4)
		{ 
			door_status();
			btncnt = 0;
		}
	}
}