#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int j;

	if (i <= 0)
	{
		j = -i;
		j = j % 10;
		return (_putchar(j + '0'));

	}
	else
	{
		j = i;
		j = j % 10;
		return (_putchar(j + '0'));
	}
}
