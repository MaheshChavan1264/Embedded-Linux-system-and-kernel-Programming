#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	int n1, n2, rs; 
	double d_rs; 

	printf ("Enter n1:"); 
	scanf ("%d", &n1); 

	printf ("Enter n2:"); 
	scanf ("%d", &n2); 

	printf ("[1]:Addition demo:\n"); 
	rs = n1 + n2; 
	printf ("rs:%d\n", rs); 

	printf ("[2]:Subtraction demo:\n"); 
	rs = n1 - n2; 
	printf ("rs:%d\n", rs); 

	printf ("[3]:Multiplication demo:\n"); 
	rs = n1 * n2; 
	printf ("rs:%d\n", rs); 

	printf ("[4]:Division demo:\n"); 
	rs = n1 / n2; 
	printf ("rs:%d\n", rs); 

	printf ("[5]:Remainder demo:\n"); 
	rs = n1 % n2; 
	printf ("rs:%d\n", rs); 

	printf ("[6]:Floating division demo:\n"); 
	d_rs = (float)n1/n2; 
	printf ("d_rs:%lf\n", d_rs); 

	printf ("[7]:pre-ncrement operator:\n"); 
	printf ("n1:Before pre-increment:%d\n", n1); 
	rs = ++n1; 
	printf ("rs:%d\n", rs); 

	printf ("[8]:post-increment operator:\n"); 
	printf ("n1:Before post increment:%d\n", n1); 
	rs = n1++; 
	printf ("rs:%d\n", rs); 
	printf ("n1:%d\n", n1); 

	printf ("[9]:Left shift operator:\n"); 
	n1 = 100; 
	printf ("n1:%d\n", n1); 
	rs = n1 << 2; 
	printf ("rs=(n1<<2):%d\n", rs); 
       	rs = n1 << 3; 
	printf ("rs=(n1<<3):%d\n", rs); 
	rs = n1 << 4; 
	printf ("rs=(n1<<4):%d\n", rs); 

	printf ("[10]:Right shift operator:\n"); 
	n1 = 100; 
	printf ("n1:%d\n", n1); 
	rs = n1 >> 2; 
	printf ("rs=(n1>>2):%d\n", rs); 
       	rs = n1 >> 3; 
	printf ("rs=(n1>>3):%d\n", rs); 
	rs = n1 >> 4; 
	printf ("rs=(n1>>4):%d\n", rs); 

	n1 = 0x10101010; 
	n2 = 0x01010101; 

	printf ("[11]:Biwise AND:\n"); 
	rs = n1 & n2; 
	printf ("rs:%x\n", rs); 

	printf ("[12]:Bitwise OR:\n"); 
	rs = n1 | n2; 
	printf ("rs:%x\n", rs); 

	printf ("[13]:Bitwise XOR:\n"); 
	rs = n1 ^ n2; 
	printf ("rs:%x\n", rs); 
	
	printf ("[14]:Bitwise NOT:\n"); 
	printf ("n1:%x\n", n1); 
	rs = ~n1; 
	printf ("rs:%x\n", rs);

	printf ("[15]:Comparison operator\n"); 
	n1 = 100; 
	n2 = 200; 
	rs = (n1 < n2); 
	printf ("%d < %d = %d\n", n1, n2, rs); 
	rs = (n1 <= n2); 
	printf ("%d <= %d = %d\n", n1, n2, rs); 
	rs = (n1 > n2); 
	printf ("%d > %d = %d\n", n1, n2, rs); 
	rs = (n1 >= n2); 
	printf ("%d >= %d = %d\n", n1, n2, rs); 
	rs = (n1 == n2); 
	printf ("%d == %d = %d\n", n1, n2, rs); 
	rs = (n1 != n2); 
	printf ("%d != %d = %d\n", n1, n2, rs); 

	exit (EXIT_SUCCESS); 
}
