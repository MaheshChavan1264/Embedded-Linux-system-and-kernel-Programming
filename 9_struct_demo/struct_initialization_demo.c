#include <stdio.h> 
#include <stdlib.h> 

struct A 
{
	int i_num; 
	char c_ans; 
	float f_num; 
}ina = {10, 'A', 3.14}, uninit_in1; 

struct A ina_2 = {100, 'D', 324.3}; 

int n1, n2, n3; 
int n11=10, n22=20, n33=30; 
int n111=100, n222, n333=300; 

struct A1 {
	int i_num; 
	float f_num; 
	char c_ans
} in1, in2, in3; 

/* put your values in blanks */ 
struct B {int a; char b; float c} in11={10, 'a', 3.14}, 
	 			  in22={100, 'Z', 6.28}, 
				  in33={1000, 'H', 45.4 }; 

struct C 
{
	int a;
	char b; 
	float c
} in111={200, 'A', 56.54 }, in222, in333 = {43, 'D', 324.4 }; 

struct D 
{
	int a; 
	char b; 
	float c; 
}*ptr, ind = {10, '\0' , 3.14}, un_init_d; 

struct E 
{
	int a; 
	char b; 
	float f1, f2; 
	double d1, d2; 
	char c; 
} e2 = {10, '\0', 0.0, 0.0, 0.0, 0.0, 'A'}; 

struct E e1 = {.a=100, .c='Z'}; 

int main (void) 
{
	return (0); 
}
