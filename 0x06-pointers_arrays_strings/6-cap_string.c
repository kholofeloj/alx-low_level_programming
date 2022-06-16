#include "main.h"

/**
* cap_string -> changes a string to Uppercase
* @p: a pointer to the string to be changed
* Return: returns a string
*/
char *cap_string(char *p)
{
	char space[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')',
	 '{', '}' };
	int length = 13;
	int a = 0, i;

	while (p[a])
	{
		i = 0;
		while (i < length)
		{
			if ((a == 0 || s[a - 1] == space[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++
	}
	return (p);
}
