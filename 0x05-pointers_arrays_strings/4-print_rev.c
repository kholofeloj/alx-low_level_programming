#include "main.h"

/**
 * print_rev -prints a string in reverse
 * @s: a string to be printed
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0, i--)
	;
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
