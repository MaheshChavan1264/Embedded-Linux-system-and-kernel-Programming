#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

#include "gpio.h"

#define GPIO_NUMBER 4
#define ITERATIONS 10

int main(int argc, char *argv[])
{
	int i = 0;

	// initializing 
	GPIO_T *ptr_gpio_led = gpio_init(GPIO_NUMBER);
	if(ptr_gpio_led == NULL)
	{
		fprintf(stderr, "gpio_init: Failed\n");
		exit(EXIT_FAILURE);
	}

	usleep(100000);

	// Setting direction as output
	if(gpio_set_direction(ptr_gpio_led, OUTPUT) == FALSE)
	{
		fprintf(stderr, "gpio_set_direction: Failed\n");

		if(ptr_gpio_led)
		{
			gpio_uninit(ptr_gpio_led);
			exit(EXIT_FAILURE);	
		}
	}


	/*for(i = 0; i < ITERATIONS; i++)
	{
		// Setting value as 1
		if(gpio_set_value(ptr_gpio_led, HIGH) == FALSE)
		{
			fprintf(stderr, "gpio_set_value: Failed\n");

			if(ptr_gpio_led)
			{
				gpio_uninit(ptr_gpio_led);
				exit(EXIT_FAILURE);	
			}
		}

		sleep(1);

		// Setting value as 0
		if(gpio_set_value(ptr_gpio_led, LOW) == FALSE)
		{
			fprintf(stderr, "gpio_set_value: Failed\n");

			if(ptr_gpio_led)
			{
				gpio_uninit(ptr_gpio_led);
				exit(EXIT_FAILURE);	
			}
		}

		sleep(1);
	}*/

	fprintf(stderr, "Now toggling with the method toggle");

	for(i = 0; i < ITERATIONS; i++)
	{
		// Toggling the value
		if(gpio_toggle_value(ptr_gpio_led) == FALSE)
		{
			fprintf(stderr, "gpio_toggle_value: Failed\n");

			if(ptr_gpio_led)
			{
				gpio_uninit(ptr_gpio_led);
				exit(EXIT_FAILURE);	
			}
		}		

		sleep(1);
	}

	if(gpio_uninit(ptr_gpio_led) == FALSE)
	{
		fprintf(stderr, "gpio_uninit: Failed\n");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}