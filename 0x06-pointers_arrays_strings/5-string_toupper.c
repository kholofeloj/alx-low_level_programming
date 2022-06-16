#include "main.h"
#include <stdio.h>

/**
* string_toupper - takes string to Uppcase
* @k: pointer to the string to be changed
* Return: string
*/
char *string_toupper(char *k)
{
	int j;

	j = 0;
	while (k[j] != '\0')
	{
		if (k[j] >= 'a' && k[j] <= 'z')
			k[j] = k[j] - 32;
		j++;
	}

	return (k);
}
