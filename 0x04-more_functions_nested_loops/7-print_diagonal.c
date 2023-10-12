#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 * Result: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
