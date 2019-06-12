#include <stdio.h> 

int main (void) 
{
	int n; 
	int cnt1=0, cnt2=0; 

	printf ("Enter an integer:"); 
	scanf ("%d", &n); 

/*	if (n > 0) 
	{
		cnt1++; 	
	}
	else
	{
		cnt2++; 
	}
*/ 
	(n > 0) ? cnt1++ : cnt2++; 

	printf ("cnt1:%d cnt2:%d\n", cnt1, cnt2); 

	/* General syntax : (boolean expression) ? <st1> : <st2> */  

}
