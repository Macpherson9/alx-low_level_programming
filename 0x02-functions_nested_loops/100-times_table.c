#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k < 10)
			{
			_putchar(k + '0');
			if (j != n)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if (i * (j + 1) < 10)
				_putchar(' ');
			}
			else
				_putchar('\n');
			}
			if (k > 9 && k < 100)
			{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			if (j != n)
			{
			_putchar(',');
			_putchar(' ');
			if (i * (j + 1) < 100)
				_putchar(' ');
			}
			else
				_putchar('\n');
			}
			if (i * j > 99)
			{
			_putchar((i * j) / 100 + '0');
			_putchar(((i * j) % 100) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			if (j != n)
			{
			_putchar(',');
			_putchar(' ');
			}
			else
				_putchar('\n');
			}}}
	}
}
