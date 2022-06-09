#include "main.h"

/**
 * main - _abs function computes the absolute value of an integer
 *
 * n is an integer
 *
 * Return: Always return 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
