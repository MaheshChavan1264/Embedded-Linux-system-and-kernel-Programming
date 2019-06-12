#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	printf ("sizeof (char):%lu\n", sizeof (char)); 
	printf ("sizeof (unsigned char):%lu\n", sizeof (unsigned char)); 
	printf ("sizeof (short int):%lu\n", sizeof (short int)); 
	printf ("sizeof (unsigned short int):%lu\n", 
		 sizeof (unsigned short int)); 
	printf ("sizeof (int):%lu\n", sizeof (int)); 
	printf ("sizeof (unsigned int):%lu\n", sizeof (unsigned int)); 
	printf ("sizeof (long int):%lu\n", sizeof (long int)); 
	printf ("sizeof (unsigned long int):%lu\n", sizeof (unsigned long int)); 
	printf ("sizeof (long long int):%lu\n", sizeof (long long int)); 
	printf ("sizeof (unsigned long long int):%lu\n", 
		 sizeof (unsigned long long int )); 
	printf ("sizeof (float):%lu\n", sizeof (float)); 
	printf ("sizeof (double):%lu\n", sizeof (double)); 
	printf ("sizeof (long double):%lu\n", sizeof (long double)); 

	exit (EXIT_SUCCESS); 
}
