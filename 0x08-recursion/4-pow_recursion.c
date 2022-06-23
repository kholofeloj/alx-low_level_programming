#include "main.h"

/**
 * _pow_recursion - x to the power of y using recursion
 * @x: x
 * @y: y
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
