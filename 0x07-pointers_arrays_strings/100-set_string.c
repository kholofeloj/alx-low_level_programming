#include "main.h"

/**
* set_string - sets the value of a pointer to char
* @s: a pointer to change
* @to: a string to change the pointer to
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
