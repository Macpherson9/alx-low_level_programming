#include "main.h"

/**
 * times_table - print 9 times table
 * return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i * j) > 9)
			{
				_putchar((i * j) / 10);
				_putchar((i * j) % 10);
			}
			else
				_putchar((i * j));
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
