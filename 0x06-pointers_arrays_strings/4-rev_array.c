#include "main.h"

/**
 * reverse_array - a function that reverse an array of integers
 * @a: pointer to an integer variable
 * @n: a variable
 * Result: void
 */

void reverse_array(int *a, int n)
{
	int i, ch;

	for (i = 0; i < n; i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
	}
}
