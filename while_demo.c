#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	int i, j, cnt; 

	i=0; 
	while (i < 10)
	{
		printf ("i:%d\n", i); 
		i = i + 1; 
	}

	i=0,cnt=0; 
	while (i < 30)
	{
		printf ("i:%d\n", i); 
		i+=3, cnt++; 
	}
	printf ("while:2:Executed %d times\n", cnt); 

	i=0, j=1, cnt=0; 
	while (i < 10 && j < 21) 
	{
		printf ("i:%d j:%d\n", i, j); 
		i++, j+=3, cnt++; 
	}
	printf ("while:3:Executed %d times\n", cnt); 

	i=0, j=1, cnt=0; 
	while (i < 10 || j < 21) 
	{
		printf ("i:%d j:%d\n", i, j); 
		i++, j+=3, cnt++; 
	}
	printf ("while:4:Executed %d times\n", cnt); 

	return (0); 
}
