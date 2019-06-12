#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	int i_num; 

	printf ("Enter an integer value:"); 
	scanf ("%d", &i_num); 

	if (i_num > 0) 
	{
		printf ("Hello\n"); 
	}
	else
	{
		printf ("World\n"); 
	}

	exit (EXIT_SUCCESS); 
}
