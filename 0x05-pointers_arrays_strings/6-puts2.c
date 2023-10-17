#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i, j;
	int sum = 0;

	for (j = 0; str[j] != '\n'; j++)
		sum++;
	for (i = 0; i <= sum; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
