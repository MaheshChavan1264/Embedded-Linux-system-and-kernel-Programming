#include <stdio.h> 
#include <stdlib.h> 

void test_function_v (int num); 
void test_function_r (int *p); 

int main (void) 
{
	int n=10;
	printf ("main:before calling test_function_v:n:%d\n", n);
       	test_function_v(n); 	
	printf ("main:after calling test_function_v:n:%d\n", n); 

	printf ("main:address of n:%p\n", &n); 
	printf ("main:before calling test_function_r:n:%d\n", n);
       	test_function_r(&n); 	
	printf ("main:after calling test_function_r:n:%d\n", n); 

	return (EXIT_SUCCESS); 
}

void test_function_v (int num) 
{
	printf ("test_function_v:initial value of num:%d\n", num); 
	num = 1000; 
	printf ("test_function_v:final value of num:%d\n", num); 
}

void test_function_r (int *p) 
{
	printf ("test_function_r:address of p :%p\n", &p); 
	printf ("test_function_r:address in p:%p\n", p); 
	printf ("test_function_r:*p:%d\n", *p); 
	*p = 1000; 
	printf ("test_function_r:*p:%d\n", *p); 
}
