#include <stdio.h> 
#include <stdlib.h> 

int my_add (int, int); 
int my_sub (int, int); 
int invoke (int, int, int (*)(int, int)); 

int main (void) 
{
	int rs; 

	rs = invoke (20, 10, my_add); 
	printf ("rs:%d\n", rs); 
	rs = invoke (20, 10, my_sub); 
	printf ("rs:%d\n", rs); 

	return (EXIT_SUCCESS); 
}


int invoke (int n1, int n2, int (*ptr)(int, int))
{
	int result = ptr (n1, n2); 
	return (result); 
}

int my_add (int n1, int n2) 
{
	return (n1+n2); 
}

int my_sub (int n1, int n2) 
{
	return (n1-n2); 
}
