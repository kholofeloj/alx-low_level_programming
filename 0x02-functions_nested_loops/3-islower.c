#include "main.h"

/**
 * * _isalpha - checks for lowercase or uppercase character
 * * Description: The character C to be checked
 * *
 * * Return: returns 1 if c is letter, uppercase or lowercase, returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}

