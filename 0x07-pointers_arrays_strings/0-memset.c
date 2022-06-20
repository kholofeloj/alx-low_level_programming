#include "main.h"

/**
* _memset - this fuction fills a memory with a constant byte
* @s: - is a string
* @b: - a character
* @n: - is an integer
* Return: returns a string
*/
har *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
