#include "main.h"

/**
* cap_string -> changes a string to Uppercase
* @p: a pointer to the string to be changed
* Return: returns a string
*/
char *cap_string(char *p)
{
	int p;

	p = 0;
	while (p[j] != '\0')
	{
		if (p[j] == ' ' || p[j] == ';' || p[j] == '\n' || p[j] == '\t'
		    || p[j] == ',' || p[j] == '.' || p[j] == '!' || p[j] == '?'
		    || p[j] == '"' || p[j] == '(' || p[j] == ')' ||
		    p[j] == '{' || p[j] == '}')
			if (p[j + 1] >= 'a' && p[j + 1] <= 'z')
			p[j + 1] = p[j + 1] - 32;
		j++;
	}
	if (p[0] >= 'a' && p[0] <= 'z')
		p[0] = p[0] - 32;

	return (p);
	}
