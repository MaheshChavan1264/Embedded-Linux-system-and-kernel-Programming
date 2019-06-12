#include <stdio.h> 

int main (void) 
{
	int n1, n2, n3, n4, n5, n6; 

	printf ("Enter n1:"); 
	scanf ("%d", &n1); 

	printf ("Enter n2:"); 
	scanf ("%d", &n2); 

	printf ("Enter n3:"); 
	scanf ("%d", &n3); 

	printf ("Enter n4:"); 
	scanf ("%d", &n4); 

	printf ("Enter n5:"); 
	scanf ("%d", &n5); 

	printf ("Enter n6:"); 
	scanf ("%d", &n6); 

	if (n1 > n2) 
	{
		printf ("%d > %d\n", n1, n2); 
	}
	else if (n3 < n4) 
	{
		printf ("%d < %d\n", n3, n4); 
	}
	else if (n5 == n6) 
	{
		printf ("%d == %d\n", n5, n6); 
	}
	else
	{
		printf ("%d <= %d && %d >= %d && %d != %d\n", 
			n1, n2, n3, n4, n5, n6); 
	}

	return (0); 
}
