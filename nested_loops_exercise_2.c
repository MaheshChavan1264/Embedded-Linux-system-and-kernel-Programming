#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	int i, j, n; 

	for (i=0; i < 10; i++) 
	{
		for (j=i; j < 10; j++) 
		{
			printf ("i:%d j:%d\n", i, j); 
		}
	}

	printf ("Enter n:"); 
	scanf ("%d", &n); 

	for (i=0; i < n; i++) 
	{
		for (j=i+1; j < n; j++) 
		{
			printf ("i:%d j:%d\n", i, n); 
		}
	}

	return (0); 
}
