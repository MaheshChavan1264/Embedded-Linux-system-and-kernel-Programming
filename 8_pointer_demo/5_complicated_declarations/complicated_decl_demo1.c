#include <stdio.h> 
#include <stdlib.h> 

void (*signal (int, void (*)(int)))(int); 

int (*(*get_arr (void))[])(int, int); 
int my_add (int, int); 
int my_sub (int, int); 

int main (void) 
{
	int (*(*ptr)[])(int, int); 

	ptr = get_arr (); 
	printf ("sum:%d sub:%d\n", ((*ptr)[0])(20, 10), ((*ptr)[1])(20, 10)); 
	free (ptr); 

	exit (EXIT_SUCCESS); 
}

int (*(*get_arr (void))[])(int, int)
{
	int (*(*ptr)[])(int, int); 

	ptr = (int (*(*)[])(int,int))calloc (2, sizeof (int(*(*)[])(int, int))); 
	(*ptr)[0] = my_add; 
	(*ptr)[1] = my_sub; 

	return (ptr); 
}

int my_add (int n1, int n2) 
{
	return (n1+n2); 
}

int my_sub (int n1, int n2) 
{
	return (n1-n2); 
}
