#include <stdlib.h> 

int i_num; 

int *get_num (void) 
{
	i_num = rand (); 
	return (&i_num); 	
}
