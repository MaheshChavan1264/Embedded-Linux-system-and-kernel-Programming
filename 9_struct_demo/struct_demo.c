#include <stdio.h> 
#include <stdlib.h> 

struct A 
{
	int i_num; 
	char c_ans; 
	float f_num; 
}; 

struct A ina = {10, 'A', 3.14f}; 

int main (void) 
{
	printf ("sizeof (int):%ld\n", sizeof (int)); 
	printf ("sizeof (char):%ld\n", sizeof (char)); 
	printf ("sizeof (float):%ld\n", sizeof (float)); 
	printf ("sizeof (struct A):%ld\n", sizeof (struct A)); 
	return (EXIT_SUCCESS); 
}
