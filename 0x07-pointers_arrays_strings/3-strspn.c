#include "main.h"

/**
* _strspn - gets length of substring accept from string s
* @accept: substring
* @s: string
* Return: length of substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, ss = 0, ssi = 0;

	for (i = 0 ; *(s + i) != '\0'; i++)
	{
		if (not_scanf(accept, *(s + i)))
		{
			if (ss == 0)
				ss = 1;
			ssi++;
		}
		else if (ss == 1)
			return (ssi);
	}
	return (ssi);
}
