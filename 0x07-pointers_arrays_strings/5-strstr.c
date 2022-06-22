#include "main.h"

/**
* _strstr - find the first occurrence of a substring
* @needle: a substring to be found in haystack
* @haystack: a string to check for substring needle
* Return: a pointer to the beginning of the located
* substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i)
	}
	return (0);
}
