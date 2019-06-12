#include <stdio.h> 
#include <stdlib.h> 

struct test_structure 
{
	int i_num; 
	char c_ans; 
	float f_num; 
}; 

struct test_structure_packed
{
	int i_num; 
	char c_ans; 
	float f_num; 
}__attribute__((packed)); 

struct nested_struct
{
	int i_num; 
	char c_ans; 
	struct inside_struct 
	{
		float f_num; 
		double d_num; 
	}ins; 
	float nf_num; 
}; 

struct test_structure t1 = {10, 'A', 3.14f}; 
struct test_structure_packed t2_packed = {100, 'B', 6.28}; 
struct nested_struct n_struct = {100, 'N', {3.14f, 56.54}, 324.32}; 

struct test_structure *ptr_t1 = &t1; 
struct test_structure_packed *ptr_t2_packed = &t2_packed; 
struct nested_struct *ptr_n_struct = &n_struct;

int main (void)
{
	printf ("Printing test_structure: Way 1:\n"); 
	printf ("ptr_t1->i_num=%d ptr_t1->c_ans=%c ptr_t1->f_num=%.2f\n", 
		ptr_t1->i_num, ptr_t1->c_ans, ptr_t1->f_num); 
	printf ("Printing test_structure: Way 2:\n"); 
	printf ("(*ptr_t1).i_num=%d (*ptr_t1).c_ans=%c (*ptr_t1).f_num=%.2f\n", 
		(*ptr_t1).i_num, (*ptr_t1).c_ans, (*ptr_t1).f_num); 
	printf ("Printing test_structure: Way 3:\n"); 
	printf ("t1.i_num=%d t1.c_ans=%c t1.f_num=%.2f\n", 
		t1.i_num, t1.c_ans, t1.f_num); 

	printf ("Printing the addresses inside structure way 1:\n"); 
	printf ("ptr_t1=%p\n", ptr_t1); 
	printf ("& (*ptr_t1).i_num=%p\n", &(*ptr_t1).i_num); 
	printf ("&(*ptr_t1).c_ans=%p\n", &(*ptr_t1).c_ans); 
	printf ("&(*ptr_t1).f_num=%p\n", &(*ptr_t1).f_num); 

	printf ("Printing the addresses inside structure way 2:\n"); 
	printf ("ptr_t1=%p\n", ptr_t1); 
	printf ("&ptr_t1->i_num=%p\n", &ptr_t1->i_num); 
	printf ("&ptr_t1->c_ans=%p\n", &ptr_t1->c_ans); 
	printf ("&ptr_t1->f_num=%p\n", &ptr_t1->f_num); 

	printf ("Printing the addresses inside structure way 3:\n"); 
	printf ("&t1=%p\n", &t1);
	printf ("&t1.i_num=%p\n", &t1.i_num);
	printf ("&t1.c_ans=%p\n", &t1.c_ans); 
	printf ("&t1.f_num=%p\n", &t1.f_num); 

	return (EXIT_SUCCESS); 
}

