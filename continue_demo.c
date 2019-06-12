#include <stdio.h> 

/* Enter an inifinite loop prompting user to enter 
 * a positive integer. If integer integer is negative
 * then break out of the loop displaying error message
 * 0 indicates user wants to end the loop 
 * If number is indeed positive then print even numbers 
 * only. Skip the odds */ 

#define TRUE	1

int main (void) 
{
	int num; 

	while (TRUE) 
	{
		printf ("Enter num:"); 
		scanf ("%d", &num); 

		if (num <= 0)
		{
			if (num < 0) 
			{
				printf ("Error:Enter positive numbers only\n"); 
				return (-1); 
			}
			break; 
		}
		else
		{
			if ((num % 2) == 1) 
			{
				continue; 
			}
			else
			{
				printf ("num:%d\n", num); 
			}

		}
	}

	return (0); 
}
