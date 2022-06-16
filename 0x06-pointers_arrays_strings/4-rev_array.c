#include "main.h"
#include <stdio.h>

/**
* reverse_array -> this function reverses an array
* @a: a pointer to the Array to reverse
* @n: the length of an array
*/
void reverse_array(int *a, int n)
{
	int k;
	int i;
	int array[1000];


	k = 0;
	while (k < n)
	{

		array[k] = a[k];
		k++;
	}

	i = 0;
	while (i < n)
	{
		a[i] = array[k - 1];
		k--;
		i++;
	}
}
