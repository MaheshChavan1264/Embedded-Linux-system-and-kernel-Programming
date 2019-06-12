#include <stdio.h> 
#include <stdlib.h> 

int my_add (int, int); 
int my_sub (int, int); 
int invoke (int, int, int (*)(int, int)); 

int main (void) 
{
	int n1, n2; 

	printf ("Enter n1:"); 
	scanf ("%d", &n1); 

	printf ("Etner n2:"); 
	scanf ("%d", &n2); 

	printf ("%d + %d = %d\n", n1, n2, invoke (n1, n2, my_add)); 
	printf ("%d - %d = %d\n", n1, n2, invoke (n1, n2, my_sub)); 

	return (EXIT_SUCCESS); 
}

int invoke (int n1, int n2, int (*fun_ptr)(int, int))
{	
	int tmp; 
	tmp = fun_ptr (n1, n2); 
	return (tmp); 
	// return (fun_ptr (n1, n2)); 
}

int my_add (int n1, int n2)
{
	return (n1+n2); 
}

int my_sub (int n1, int n2) 
{
	return (n1-n2); 
}
