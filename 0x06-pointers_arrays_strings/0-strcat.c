#include "main.h"

/**
* _strcat -> this function returns a string
* @dest: first parameter
* @src: second parameter
* Return: returns a string
*/
char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length])
		length++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length += 1;
	}
	dest[length] = '\0';
	return (dest);
}
