#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

#define CAP 1000000

void input (int *arr, int n); 
void output (int *arr, int n); 
void sort (int *arr, int n); 

int main (int argc, char *argv[])
{
	int *arr; 
	int nr_elements; 

	if (argc != 2) 
	{
		printf ("usage error : %s nr_elements\n", argv[0]); 
		exit (EXIT_FAILURE); 
	}

	nr_elements = atoi (argv[1]); 
	srand (time (0)); 
	arr = (int*) calloc (nr_elements, sizeof (int)); 
	if (arr == NULL)
	{
		printf ("memory allocation failed\n"); 
		exit (EXIT_FAILURE); 
	}

	input (arr, nr_elements); 
	printf ("output before sort:\n"); 
	output (arr, nr_elements); 
	sort (arr, nr_elements); 
	printf ("output after sort:\n"); 
	output (arr, nr_elements); 

	exit (EXIT_SUCCESS); 
}

void sort (int *arr, int n) 
{
	int i, j, key; 

	for (j=1; j < n; j++) 
	{
		key = arr[j]; 
		i   = j - 1; 

		while (i > -1 && arr[i] > key)
		{
			arr[i+1] = arr[i]; 
			i--;
		}
			
		arr[i+1] = key; 
	}
}

void input (int *arr, int n)
{
	int i; 

	for (i=0; i < n; i++) 
	{
		arr[i] = rand () % CAP; 
	}
}

void output (int *arr, int n) 
{
	int i; 

	for (i=0; i < n; i++) 
	{
		printf ("arr[%d]:%d\n", i, arr[i]); 
	}
}
