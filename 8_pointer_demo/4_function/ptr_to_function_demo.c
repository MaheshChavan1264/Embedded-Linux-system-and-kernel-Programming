#include <stdio.h> 
#include <stdlib.h> 

int my_add (int, int); 
int my_sub (int, int); 

int main (void) 
{
	int (*ptr)(int, int); 

	ptr = my_add; 
	printf ("ptr:%p, sum:%d\n", ptr, ptr(20, 10)); 
	ptr = my_sub; 
	printf ("ptr:%p, sub:%d\n", ptr, ptr(20, 10)); 
}

int my_add (int n1, int n2) 
{
	return (n1+n2); 
}

int my_sub (int n1, int n2) 
{
	return (n1-n2); 
}
