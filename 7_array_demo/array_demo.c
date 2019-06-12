#include <stdio.h> 
#include <stdlib.h> 

/* array of characters */ 
char msg1[5] = {'H', 'e', 'l', 'l', 'o'}; 
char msg2[]  = "World"; 

/* array of integers */ 
int i_arr1[5] = {10, 20, 30, 40, 50}; 
int i_arr2[]  = {100, 200}; 
int i_arr3[5]; 
int i_arr4[5] = {1000, 200, 3000}; 

int main (void) 
{
	int i; 

	/* Displaying character array 1 */ 
	puts ("Displaying character array1:"); 
	for (i=0; i < 5; i++) 
	{
		printf ("arr[%d]:%c\n", i, msg1[i]); 
	}

	/*Displaying character array 2 */ 
	puts ("Displaying character array 2:"); 
	i = 0; 
	while (msg2[i] != '\0') 
	{
		printf ("arr[%d]:%c\n", i, msg2[i]); 
		i++; 
	}

	/* Displaying integer array1 */ 
	puts ("Displaying integer array1:"); 
	for (i=0; i < 5; i++) 
	{
		printf ("arr[%d]:%d\n", i, i_arr1[i]); 
	}

	/* Disiplaying integer array2 */ 
	puts ("Displaying integer array2:"); 
	for (i=0; i < 2; i++) 
	{
		printf ("arr[%d]:%d\n", i, i_arr2[i]); 
	}

	/* Taking array 3 from standard input device */ 
	puts ("Input array 3 from standard input device:"); 
	for (i=0; i < 5; i++) 
	{
		printf ("Enter arr[%d]:", i); 
		scanf ("%d", &i_arr3[i]); 
	}

	/* Displaying array3 */ 
	puts ("Displaying arr3:"); 
	for (i=0; i < 5; i++) 
	{
		printf ("arr[%d]:%d\n", i, i_arr3[i]); 
	}

	puts ("Displaying contents of array 4 with addresses:"); 
	for (i=0; i < 5; i++) 
	{
		printf ("arr[%d]:%d:Address:%lu\n", i, i_arr4[i],
			(unsigned long int) &i_arr4[i]); 
	}

	return (0); 
}
