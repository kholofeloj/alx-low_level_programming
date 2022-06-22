#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: a string to check
* @accept: a string to check against
* Return: a pointer to byte in char s that matches or
* NULL if does not match
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
