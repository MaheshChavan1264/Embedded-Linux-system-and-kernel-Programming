#include <stdio.h> 
#include <stdlib.h> 

#define n1 5
#define n2 7 
#define n3 4

void sort (int arr[], int n);
void output (int arr[], int n); 

int arr1[n1] = {1234, 34, 367, 456, 253}; 
int arr2[n2] = {354, 5768, 23, 475, 1234, 54, 122344}; 
int arr3[n3] = {34564, 5, 567, 676}; 

int main (void) 
{
	printf ("arr1:Before sort:\n"); 
	output (arr1, n1); 
	sort (arr1, n1); 
	printf ("arr1:After sort:\n"); 
	output (arr1, n1); 
	
	printf ("arr2:Before sort:\n"); 
	output (arr2, n2); 
	sort (arr2, n2); 
	printf ("arr2:After sort:\n"); 
	output (arr2, n2); 	
	
	printf ("arr3:Before sort:\n"); 
	output (arr3, n3); 
	sort (arr3, n3); 
	printf ("arr3:After sort:\n"); 
	output (arr3, n3); 

	return (EXIT_SUCCESS); 
}

void sort (int arr[], int n) 
{
	int i, j, key; 

	for (j=1; j < n; j++) 
	{
		key = arr[j]; 
		i   = j - 1; 

		while (i > -1 && arr[i] > key)
		{
			arr[i+1] = arr[i]; 
			i = i - 1; 
		}

		arr[i+1] = key; 
	}
}

void output (int arr[], int n) 
{
	int i; 

	for (i=0; i < n; i++) 
	{
		printf ("arr[%d]:%d\n", i, arr[i]); 
	}
}
