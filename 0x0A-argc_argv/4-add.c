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
	int sum = 0, num, i, j, c;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (argv[i][c] > '9' || argv[i][c] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (j = 1; j < argc; j++)
	{
		num = atoi(argv[j]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
