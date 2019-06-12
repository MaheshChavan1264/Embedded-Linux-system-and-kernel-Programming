#include <stdio.h> 
#include <stdlib.h> 

struct A 
{
	int i_num;
	char c_ans; 
	double d_num; 
}; 

void test_function (struct A*); 

int main (void) 
{
	struct A ina = {10, 'A', 3.14}; 
	printf ("main:address of ina:%p\n", &ina); 
	printf ("main:printing a structure in main before passing:\n"); 
	printf ("main:ina.i_num:%d\n", ina.i_num); 
	printf ("main:ina.c_ans:%c\n", ina.c_ans); 
	printf ("main:ina.d_num:%lf\n", ina.d_num); 
	test_function (&ina); 
	printf ("main:printing a structure in main after passing:\n"); 
	printf ("main:ina.i_num:%d\n", ina.i_num); 
	printf ("main:ina.c_ans:%c\n", ina.c_ans); 
	printf ("main:ina.d_num:%lf\n", ina.d_num); 

	return (EXIT_SUCCESS); 	
}

void test_function (struct A *p) 
{
	printf ("test_function:Address in p:%p\n", p); 
	printf ("test_function:p->i_num :%d\n", p->i_num ); 
	printf ("test_function:p->c_ans :%c \n", p->c_ans); 
	printf ("test_function:p->d_num :%lf \n", p->d_num ); 
	p->i_num = 1000; 
	p->c_ans = 'Z'; 
	p->d_num = 6.3234; 
	printf ("test_function:p->i_num :%d\n", p->i_num ); 
	printf ("test_function:p->c_ans :%c \n", p->c_ans); 
	printf ("test_function:p->d_num :%lf \n", p->d_num ); 

}
