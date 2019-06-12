#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	int i; 

	printf ("Enter i:"); 
	scanf ("%d", &i); 

	if (i < 0) 
	{
		printf ("Enter positive number\n"); 
	}

	return (0); 
}
