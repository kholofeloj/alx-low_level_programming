#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main -> a program that prints it name
* @argc: counter
* @argv: array of listed commands
* Return: 0
*/

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
