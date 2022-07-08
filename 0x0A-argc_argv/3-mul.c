#include <stdio.h>
#include <stdlib.h>

/**
* main -> a program that prints it name
* @argc: counter
* @argv: array of listed commands
* Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0, arg1, arg2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	agr1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	sum = arg1 * arg2;

	printf("%d\n", sum);
	return (0);
}
