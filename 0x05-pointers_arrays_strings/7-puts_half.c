#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, half, n;
	int sum = 0;

	for (i = 0; str[i] != '\0'; i++)
		sum++;
	if (sum % 0 == 0)
	{
		half = sum / 2;
		for (i = half; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		n = (sum - 1) / 2;
		for (i = n + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}


