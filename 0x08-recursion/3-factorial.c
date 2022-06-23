#include "main.h"

/**
* factorial - function factorial
* @n: number
* Return: a factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
