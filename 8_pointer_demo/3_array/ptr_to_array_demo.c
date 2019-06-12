#include <stdio.h> 
#include <stdlib.h> 

struct test_struct 
{
	int i_num; 
	char c_ans; 
	float f_num; 
}; 

struct test_struct test_struct_arr[5]; 
int i_arr[5] = {10, 20, 30, 40, 50}; 
short int s_arr[5]; 
char msg[5]; 

struct test_struct (*ptr1) [5]; 
int (*ptr2)[5]; 
short int (*ptr3)[5]; 
char (*ptr4)[5];

int main (void)
{
 	int i; 

	ptr1 = test_struct_arr; 
	ptr2 = i_arr;
	ptr3 = s_arr; 
	ptr4 = msg; 

	printf ("address (test_struct_arr)=%p\n", test_struct_arr); 
	printf ("address (i_arr)=%p\n", i_arr); 
	printf ("address (s_arr)=%p\n", s_arr); 
	printf ("address (msg)=%p\n", msg); 

	printf ("ptr1 = %p\n", ptr1);
	printf ("ptr2 = %p\n", ptr2);
	printf ("ptr3 = %p\n", ptr3);
	printf ("ptr4 = %p\n", ptr4);

	for (i=0; i < 5; i++) 
	{
		printf ("ptr2[%d]:%d\n", i, (*ptr2)[i]); 
	}

	return (EXIT_SUCCESS); 
}
