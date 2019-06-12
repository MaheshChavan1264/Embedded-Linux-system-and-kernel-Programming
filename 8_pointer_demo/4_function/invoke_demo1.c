#include <stdio.h> 
#include <stdlib.h> 

int my_add (int, int); 
int my_sub (int, int); 
void invoke (int, int, int (*)(int, int), int *result); 

int main (void) 
{
	int rs; 

	invoke (20, 10, my_add, &rs); 
	printf ("rs:%d\n", rs); 
	invoke (20, 10, my_sub, &rs); 
	printf ("rs:%d\n", rs); 

	return (EXIT_SUCCESS); 
}


void invoke (int n1, int n2, int (*ptr)(int, int), int *result)
{
	*result = ptr (n1, n2); 
}

int my_add (int n1, int n2) 
{
	return (n1+n2); 
}

int my_sub (int n1, int n2) 
{
	return (n1-n2); 
}
