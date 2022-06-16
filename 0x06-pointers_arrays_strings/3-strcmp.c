#include "main.h"

/**
* _strcmp -> this function copies a string
* @s1: pointer for the first string to compare
* @s2: pointer for the second string to compare
* Return: returns an integer
*/
int _strcmp(char *s1, char *s2)
{
	int k;
	int results;

	results = 0;
	for (k = 0; s1[k] != '\0'; k++)
	{
		if (s1[k] - s2[j] != 0)
		{
			results = s1[k] - s2[j];
			break;
		}
	}
	if (results == 0 && s1[k] == '\0')
		results = s1[k] - s2[k];
	return (result);
}
