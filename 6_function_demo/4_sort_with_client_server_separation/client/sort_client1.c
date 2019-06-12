#include <stdio.h> 
#include <stdlib.h> 
#include <sort.h> 

int arr1[5] = {324, 2, 456, 43, 543}; 

int main (void) 
{
	int i; 

	printf ("Before sort:\n"); 
	for (i=0; i < 5; i++) 
	{
		printf ("arr1[%d]:%d\n", i, arr1[i]); 
	}

	sort (arr1, 5); 

	printf ("After sort:\n"); 
	for (i=0; i < 5; i++) 
	{
		printf ("arr1[%d]:%d\n", i, arr1[i]); 
	}

	exit (EXIT_SUCCESS); 

}
