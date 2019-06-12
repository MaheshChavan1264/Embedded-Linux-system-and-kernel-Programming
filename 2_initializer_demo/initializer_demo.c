#include <stdio.h> 
#include <stdlib.h> 

char c_ans='A'; 
unsigned char byte_num = 0xFF; 
short int s_num = 0xFFFF; 
unsigned short int us_num = 0xFFFF; 
int i_num = 0xFFFFFFFF; 
unsigned int ui_num = 0xFFFFFFFF; 
long int l_num = 0xFFFFFFFFFFFFFFFF; 
unsigned long int ul_num = 0xFFFFFFFFFFFFFFFF; 
long long int ll_num = 0xFFFFFFFFFFFFFFFF; 
unsigned long long int ull_num = 0xFFFFFFFFFFFFFFFF;
float f_num = 3.14; 
double d_num = 453.43232; 

int main (void) 
{
	printf ("c_ans:%c\n", c_ans); 
	printf ("byte_num:%d\n", (int) byte_num); 
	printf ("s_num:%i\n", s_num); 
	printf ("us_num:%u\n", s_num); 
	printf ("i_num:%d\n", i_num); 
	printf ("ui_num:%u\n", ui_num); 
	printf ("l_num:%ld\n", l_num); 
	printf ("ul_num:%lu\n", ul_num); 
	printf ("ll_num:%lld\n", ll_num); 
	printf ("ull_num:%llu\n", ull_num); 
	printf ("f_num:%f\n", f_num); 
	printf ("d_num:%lf\n", d_num); 

	exit (EXIT_SUCCESS); 
}

