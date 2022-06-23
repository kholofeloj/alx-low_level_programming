#include "main.h"

/**
* is_prime - checks if n is a prime number
* @n: number
* @i: iterator
* Return: 1 if prime or 0 if not
*/

int is_prime(int n, int i)
{
	if (n < 1)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		if (i % n == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime(n - 1, i));
		}
	}
}

/**
* is_prime_number - determine if n is a prime number
* @n: integer
* Return: 1 if is prime, 0 if is not
*/
int is_prime_number(int n)
{
	return (is_prime(n - 1, n));
}
