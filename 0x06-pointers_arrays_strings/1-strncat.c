#include "main.h"

/**
* _strncat -> this function appends some characters
* @dest: first parameter
* @src: second parameter
* @n: third parameter
* Return: returns a string
*/
char *_strncat(char *dest, char *src, int n)
{
	_strncat(*dest, *src, n);
	return (dest);
}
