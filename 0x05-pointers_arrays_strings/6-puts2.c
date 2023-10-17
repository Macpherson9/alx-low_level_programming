#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int sum = 0;

	for (i = 0; str[i] != '\0'; i++)
		sum++;
	for (i = 0; i < sum; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
