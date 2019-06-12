#include <stdio.h> 
#include <stdlib.h> 

char c='A'; 
unsigned char uc=68; 
short int si=100; 
unsigned short int usi=200; 
int i=300; 
unsigned int ui=400; 
long int li=500; 
unsigned long int uli=600; 
long long int lli=700; 
unsigned long long int ulli=800; 
float f_num=3.14; 
double d_num=6.28; 

char *p_c; 
unsigned char *p_uc; 
short int *p_si; 
unsigned short int *p_usi; 
int *p_i; 
unsigned int *p_ui; 
long int *p_li; 
unsigned long int *p_uli; 
long long int *p_lli; 
unsigned long long int *p_ulli; 
float *p_fnum; 
double *p_dnum; 

int main (void) 
{
	p_c 	= &c; 
	p_uc 	= &uc;
	p_si 	= &si; 
	p_usi 	= &usi; 
	p_i 	= &i; 
	p_ui 	= &ui; 
	p_li 	= &li; 
	p_uli 	= &uli; 
	p_lli 	= &lli; 
	p_ulli	= &ulli; 
	p_fnum 	= &f_num; 
	p_dnum 	= &d_num; 

	puts ("Display initial state:"); 
	printf ("c:%c\n", *p_c); 
	printf ("uc:%d\n", (int)*p_uc); 
	printf ("si:%i\n", *p_si); 
	printf ("usi:%d\n", (int)*p_usi); 
	printf ("i:%d\n", *p_i); 
	printf ("ui:%d\n", *p_ui); 
	printf ("li:%ld\n", *p_li); 
	printf ("uli:%lu\n", *p_uli); 
	printf ("lli:%lld\n", *p_lli); 
	printf ("ulli:%llu\n", *p_ulli); 
	printf ("f_num:%.2f\n", *p_fnum); 
	printf ("d_num:%.2lf\n", *p_dnum); 

	*p_c	= 'Z'; 
	*p_uc	= 200; 
	*p_si	= 2000; 
	*p_usi	= 3000; 
	*p_i	= 4000;
	*p_ui	= 5000; 
	*p_li	= 6000; 
	*p_uli	= 7000; 
	*p_lli	= 8000; 
	*p_ulli	= 9000; 
	*p_fnum	= 324.45; 
	*p_dnum	= 345345.43; 
		
	puts ("Displaying final state:"); 
	printf ("c:%c\n", c); 
	printf ("uc:%d\n", (int)uc); 
	printf ("si:%i\n", si); 
	printf ("usi:%d\n", (int)usi); 
	printf ("i:%d\n", i); 
	printf ("ui:%d\n", ui); 
	printf ("li:%ld\n", li); 
	printf ("uli:%lu\n", uli); 
	printf ("lli:%lld\n", lli); 
	printf ("ulli:%llu\n", ulli); 
	printf ("f_num:%.2f\n", f_num); 
	printf ("d_num:%.2lf\n", d_num); 

	return (EXIT_SUCCESS); 
}
