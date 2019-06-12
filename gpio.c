#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "gpio.h"

/*
 *	Interface Methods
 */

GPIO_T *gpio_init(int number)
{	
	// Instantiate the struct GPIO.
	struct GPIO *gpio = (struct GPIO *)xcalloc(1, sizeof(struct GPIO));
	if(gpio == NULL)
		return NULL;

	// Assign the number to the structure member. 
	gpio->number = number;

	// Assign the name member in the structure. 
	snprintf(gpio->name, MAX_GPIO_NAME_LEN + 1, "%s%d", GPIO_STR, number);

	// Create the path and assign it to path member eg: /sys/class/gpio/gpio4/
	snprintf(gpio->path, MAX_PATH_LEN, "%s%s/", GPIO_PATH, gpio->name);

	// Export the gpio
	if (gpio_export(gpio) == FALSE)
	{
		// Free gpio's memory since we couldnt export the gpio
		if(gpio)
		{
			free(gpio);
			gpio = NULL;
		}

		return NULL;
	}

	// Return gpio instance
	return gpio;	
}

boolean gpio_uninit(GPIO_T *gpio)
{
	// Unexport the gpio file
	if(gpio_unexport(gpio) == FALSE)
	{
		//return FALSE;
	}

	// Free GPIO's instance 
	if(gpio)
	{
		free(gpio);
		gpio = NULL;
	}

	return TRUE;
}

int gpio_get_number(GPIO_T *gpio)
{
	// Simply return the value from the struct
	return gpio->number;
}

boolean gpio_set_direction(GPIO_T *gpio, GPIO_DIRECTION_T direction)
{
	char char_direction[4];

	switch(direction)
	{
		case INPUT:
			strcpy(char_direction, "in");
			char_direction[2] = '\0';
		break;
		case OUTPUT:
			strcpy(char_direction, "out");
			char_direction[3] = '\0';
		break;
	}


	// Called on direction file
	return gpio_write_str_value(gpio->path, "direction", char_direction);
}

GPIO_DIRECTION_T gpio_get_direction(GPIO_T *gpio)
{
	char buffer[3];

	// Reading direction file
	if (gpio_read(gpio->path, "direction", 3, buffer) == FALSE)
		return NO_DIRECTION;

	// Checking if the direction is in / out.
	if(strcmp(buffer, "in") == 0)
		return INPUT;
	else 
		return OUTPUT; 
}

boolean gpio_set_value(GPIO_T *gpio, GPIO_VALUE_T value)
{
	// Setting the value (0 or 1) to value folder
	return gpio_write_int_value(gpio->path, "value", value);
}

GPIO_VALUE_T gpio_get_value(GPIO_T *gpio)
{
	char char_value[2];

	// Buffer size is 2 since, char pointer's address was required by gpio_read call
	if(gpio_read(gpio->path, "value", 1, char_value) == FALSE)
		return NO_VALUE;

	// Checking if the value is 0 or 1
	if(char_value[0] == '0')
		return LOW;
	else 
		return HIGH;
}

boolean gpio_toggle_value(GPIO_T *gpio)
{
	// Get the current value of gpio
	GPIO_VALUE_T value = gpio_get_value(gpio);

	// Set the opposite value 
	switch(value)
	{
		case LOW:
			gpio_set_value(gpio, HIGH);
		break;
		case HIGH:
			gpio_set_value(gpio, LOW);
		break;
		default:
			return FALSE;
		break;
	}

	return TRUE;
}

/*
 *	Helper Functions 
 */

boolean gpio_export(GPIO_T *gpio)
{
	// Simply write number to export file 
	// eg : echo 4 > /sys/class/gpio/export
	return gpio_write_int_value(GPIO_PATH, "export", gpio->number);
}

boolean gpio_unexport(GPIO_T *gpio)
{
	// Write number to unexport file 
	// eg : echo 4 > /sys/class/gpio/unexport
	return gpio_write_int_value(GPIO_PATH, "unexport", gpio->number);
}

boolean gpio_write_str_value(char *base_path, char *file_name, char *value)
{
	FILE *fp = NULL;
	char full_path[MAX_PATH_LEN];

	// Appending file_name to base_path
	snprintf(full_path, MAX_PATH_LEN, "%s%s", base_path, file_name);

	gpio_log(full_path);
	gpio_log(value);

	// Opening the file to write / update
	fp = fopen(full_path, "w+");
	if(fp == NULL)
	{
		fprintf(stderr, "fopen: Failed with error : %s\n", strerror(errno));
		return FALSE;
	}

	// Write the string value to the file 
	fprintf(fp, "%s", value);

	// Closing the file after use
	fclose(fp);

	return TRUE;
}

boolean gpio_write_int_value(char *base_path, char *file_name, int value)
{
	char char_value[65];

	// Convert the integer to string
	snprintf(char_value, 65, "%d", value);

	// Call gpio_write_str_value with the above string
	return gpio_write_str_value(base_path, file_name, char_value);
}

boolean gpio_read(char *base_path, char *file_name, size_t num_of_char, char *retBuffer)
{
	FILE *fp = NULL;
	size_t size = 0;
	char full_path[MAX_PATH_LEN];

	// Appending file_name to base_path
	snprintf(full_path, MAX_PATH_LEN, "%s%s", base_path, file_name);

	// Opening file to write / read / update
	fp = fopen(full_path, "r");
	if(fp == NULL)
	{
		fprintf(stderr, "fopen: Failed with error : %s\n", strerror(errno));
		return FALSE;
	}

	fread(retBuffer, sizeof(char), num_of_char, fp);

	// Closing the file after use
	fclose(fp);

	return TRUE;		
}

void *xcalloc(size_t number_of_elements, size_t size_per_element)
{
	// Calling calloc with the parameters sent in by the user.
	void *ptr = calloc(number_of_elements, size_per_element);
	if(ptr == NULL)
	{	
		fprintf(stderr, "calloc : Failed to allocate memory.\n");
		return NULL;
	}

	return ptr;
}

void gpio_log(char *log_message)
{
	fprintf(stderr, "%s\n", log_message);
}
