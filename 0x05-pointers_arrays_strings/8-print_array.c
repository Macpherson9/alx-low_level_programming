#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n elements of an array of int
 * @a: pointer variable
 * @n: numbers of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}

