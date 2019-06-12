#include <stdio.h> 
#include <stdlib.h> 

#define N1 5 
#define N2 7 
#define N3 10 

int arr1[N1] = {200, 30, 44, 543, 43}; 
int arr2[N2] = {34532, 23, 234, 345, 3456, 234, 3543}; 
int arr3[N3] = {234, 324, 3454, 45635, 6856, 345677, 3, 76, 456, 223}; 

int main (void) 
{
	int i, j, key; 

	printf ("arr1 before sort:\n"); 

	for (i=0; i < N1; i++) 
	{
		printf ("arr1[%d]:%d\n", i, arr1[i]); 
	}

	for (j=1; j < N1; j++) 
	{
		key = arr1[j]; 
		i = j - 1; 

		while (i > -1 && arr1[i] > key)
		{
			arr1[i+1] = arr1[i]; 
			i = i - 1; 
		}

		arr1[i+1] = key; 
	}

	printf ("arr1 after sort:\n"); 

	for (i=0; i < N1; i++) 
	{
		printf ("arr1[%d]:%d\n", i, arr1[i]); 
	}

	printf ("arr2 before sort:\n"); 

	for (i=0; i < N2; i++) 
	{
		printf ("arr2[%d]:%d\n", i, arr2[i]); 
	}

	for (j=1; j < N2; j++) 
	{
		key = arr2[j]; 
		i = j - 1; 

		while (i > -1 && arr2[i] > key)
		{
			arr2[i+1] = arr2[i]; 
			i = i - 1; 
		}

		arr2[i+1] = key; 
	}

	printf ("arr2 after sort:\n"); 

	for (i=0; i < N2; i++) 
	{
		printf ("arr2[%d]:%d\n", i, arr2[i]); 
	}

	printf ("arr3 before sort:\n"); 

	for (i=0; i < N3; i++)
	{
		printf ("arr3[%d]:%d\n", i, arr3[i]); 
	}

	for (j=1; j < N3; j++) 
	{
		key = arr3[j]; 
		i = j - 1; 

		while (i > -1 && arr3[i] > key)
		{
			arr3[i+1] = arr3[i]; 
			i = i - 1;
		}

		arr3[i+1] = key; 
	}

	printf ("arr3 after sort:\n");

	for (i=0; i < N3; i++) 
	{
		printf ("arr3[%d]:%d\n", i, arr3[i]); 
	}
	
	return (EXIT_SUCCESS); 
}
