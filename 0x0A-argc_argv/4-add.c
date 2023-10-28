#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc <= 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
