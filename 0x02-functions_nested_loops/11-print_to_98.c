#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("98")
	}
}
