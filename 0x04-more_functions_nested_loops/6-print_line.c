#include "main.h"

/**
 * print_line -> printing line
 * @n: the number of times the char _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
}
