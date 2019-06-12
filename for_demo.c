#include <stdio.h> 

int main (void) 
{
	int i, j, cnt; 

	for (i=0; i < 10; i++) 
	{
		printf ("i:%d\n", i); 
	}

	for (i=0, cnt=0; i < 30; i+=3, cnt++)
	{
		printf ("i:%d\n", i); 
	}
	printf ("for:2:executed %d times\n", cnt); 

	for (i=0, j=1, cnt=0; i < 10 && j < 21; i++, j+=3, cnt++) 
	{
		printf ("i:%d, j:%d\n", i, j); 
	}
	printf ("for:3:executed %d times\n", cnt); 

	for (i=0, j=1, cnt=0; i < 10 || j < 21; i++, j+=3, cnt++) 
	{
		printf ("i:%d, j:%d\n", i, j); 
	}
	printf ("for:4:executed %d times\n", cnt); 

	return (0); 
}
