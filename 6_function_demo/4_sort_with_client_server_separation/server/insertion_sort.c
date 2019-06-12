void sort (int arr[], int n) 
{
	int i, j, key; 

	for (j=1; j < n; j++) 
	{
		key = arr[j]; 
		i   = j - 1; 

		while (i > -1 && arr[i] > key)
		{
			arr[i+1] = arr[i]; 
			i = i - 1; 
		}
		
		arr[i+1] = key; 
	}
}
