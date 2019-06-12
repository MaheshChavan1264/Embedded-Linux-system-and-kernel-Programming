#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 


extern int *get_num (void); 

int main (void) 
{
	int *ptr; 
	int i; 

	i = 0; 	
	while (i < 10)
	{
		ptr = get_num (); 
		printf ("ptr=%lx *ptr=%d\n", (unsigned long)ptr,  *ptr); 
		i++; 
	}

	free (ptr); 

	return (0); 
}
