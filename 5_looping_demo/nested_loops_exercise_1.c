#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	int i, j; 

	for (i=0; i < 10; i++) 
	{
		for (j=0; j < 5; j++) 
		{
			printf ("i:%d j:%d\n", i, j); 
		}
	}

	i = 1; 
	while (i < 20) 
	{
		j = 2; 
		while (j < 35) 
		{
			printf ("i:%d j:%d\n", i, j); 
			j += 5; 
		}

		i += 2; 
	}

	return (0); 
}
