#include <stdio.h> 
#include <stdlib.h> 

void test_function1 (int); 
void test_function2 (int); 

void (*my_signal (int, void (*)(int)))(int); 

int main (void) 
{
	void (*ptr)(int); 
	ptr = my_signal (1000, test_function1); 
	ptr (100); // actual argument to test_function2 

	return (EXIT_SUCCESS); 
}

void (*my_signal (int num, void (*ptr) (int)))(int)
{
	printf ("my_signal:num:%d\n", num); // expecting 1000 as actual arg for num 
	printf ("my_signal:invoking input function from formal parameter ptr\n");
	ptr (50); // 50 will be actual argument to test_function1 
	return (test_function2); 
}

void test_function1 (int num) 
{
	printf ("test_function1:%d\n", num); // expecting 50 as actual arg 
}

void test_function2 (int num) 
{
	printf ("test_function2:%d\n", num); // expecting 100 as actual arg
}
