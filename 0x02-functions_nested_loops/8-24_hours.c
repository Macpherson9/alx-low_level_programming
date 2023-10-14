#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * return: the minutes of the day
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10);
			_putchar(i % 10);
			_putchar(':');
			_putchar(j / 10);
			_putchar(j % 10);
			_putchar('\n');
		}
	}
}
