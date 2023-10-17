#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: string placeholder
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int j;
	int sum = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		sum++;
	}

	for (i = sum - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
