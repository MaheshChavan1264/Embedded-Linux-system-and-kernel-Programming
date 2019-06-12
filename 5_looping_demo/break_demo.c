#include <stdio.h> 

/* Enter into infinite loop prompting user to 
 * enter an integer, in every iteration. 0 integer 
 * will be treated as indication from user to stop 
 * iterating*/ 

#define TRUE 1

int main (void) 
{
	int num; 

	while (TRUE) 
	{
		printf ("Enter an integer, 0 to end:"); 
		scanf ("%d", &num); 
		if (num == 0) 
		{
			break; 
		}
		else
		{
			printf ("num:%d\n", num); 
		} 
	}

	return (0); 
}
