#include "main.h"

/**
 * _isdigit - function to check for a digit
 * @c: an integer argument
 * Return: success
 */

int _isdigit(int c)
{
	char c;
	c = '0';

	if (c >= 0 && c <=9)
	{
		return (1);
	}
	else
	return (0);
}
