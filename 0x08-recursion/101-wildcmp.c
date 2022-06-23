#include "main.h"

/**
* compr - compares strings
* @s1: string 1
* @s2: string 2, can have wilds
* @wldcard: wildcard handling flag
* Return: 1 if true, 0 if false
*/

int compr(char *s1, char *s2, int wldcard)
{
	if (wild == 1)
	{
		if (s2[0] == '*')
			return (compr(s1, s2 + 1, 1));
		else if (s1[0] == s2[0])
			return (compr(s1, s2, 0));
		else if (s1[0] != '\0')
			return (compr(s1 + 1, s2, 1));
		else
			return (0);
	}
	else
	{
		if (s1[0] == '\0' && s2[0] == '\0')
			return (1);
		else if (s1[0] == s2[0])
		{
			if (compr(s1 + 1, s2 + 1, 0))
			{
				return (compr(s1 + 1, s2 + 1, 0));
			}
			else
			{
				return (compr(s1 + 1, s2, 1));
			}
		}
		else if (s2[0] == '*')
			return (compr(s1, s2, 1));
		else
			return (0);
	}
}

/**
* wildcmp - compares strings, * = wildcard
* @s1: String1
* @s2: String2
* Return: 1 if true, 0 if false
*/

int wildcmp(char *s1, char *s2)
{
	return (compr(s1, s2, 0));
}
