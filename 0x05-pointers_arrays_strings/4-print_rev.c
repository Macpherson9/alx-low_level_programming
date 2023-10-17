#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: string placeholder
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int size = _strlen(s);

	if (size > 0)
	{
		for (i = size; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}

