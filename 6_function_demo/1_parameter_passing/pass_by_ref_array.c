#include <stdio.h> 
#include <stdlib.h> 

void test_function1 (int *p); 
void test_function2 (int p[]); 
void test_function3 (int (*p)[]); 

int main (void) 
{
	int arr[5] = {10, 20, 30, 40, 50}; 
	int i; 

	printf ("main:Address of arr:%p\n", arr); 
	printf ("main:Before call to function:\n"); 
	for (i=0; i < 5; i++) 
	{
		printf ("main:arr[%d]:%d\n", i, arr[i]); 
	}

	test_function3 (&arr); 

	printf ("main:After call to function:\n"); 
	for (i=0; i < 5; i++) 
	{
		printf ("main:arr[%d]:%d\n", i, arr[i]); 
	}

	return (EXIT_SUCCESS); 
}

void test_function1 (int *p) 
{
	int i; 

	printf ("tf1:Address in p:%p\n", p); 
	for (i=0; i < 5; i++) 
	{
		printf ("tf1:p[%d]:%d\n", i, p[i]); 
	}

	for (i=0; i < 5; i++) 
	{
		p[i] = i * 100; 
	}

	for (i=0; i < 5; i++) 
	{
		printf ("tf1:arr[%d]:%d\n", i, p[i]); 
	}
}

void test_function3 (int (*p)[5]) 
{
	int i; 
	
	printf ("tf3:Address in p:%p\n", p); 
	for (i=0; i < 5; i++) 
	{
		printf ("tf3:(*p)[%d]:%d\n", i, (*p)[i]); 
	}

	for (i=0; i < 5; i++) 
	{
		(*p)[i] = i * 1000; 
	}

	printf ("tf3:After change:\n"); 
	for (i=0; i < 5; i++) 
	{
		printf ("tf3:(*p)[%d]:%d\n", i, (*p)[i]); 
	}
}
