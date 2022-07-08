#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main -> a program that prints it name
* @argc: counter
* @argv: array of listed commands
* Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
