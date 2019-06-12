#include <stdio.h> 
#include <stdlib.h> 

int main (void) 
{
	int i=100; 
	
	while (i < 10)
	{
		printf ("i:%d\n", i); 
		i++; 
	}

	do
	{
		printf ("i:%d\n", i); 
		i++; 
	}while (i < 10); 

	return (0); 
}
/* 
st1; 
while (1) 
{

	// Loop body 
	st3; 

	if (!st2)
	{
		break; 
	}
}
----EQUIVALENT------------
st1; 
do 
{
	// Loop body 
	
	st3; 
}while (st2); 
*/ 

