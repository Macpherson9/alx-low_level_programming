#include "main.h"

/**
 * swap_int - swaps two integers
 * the pointer points to to 98
 * @a: first interger variable
 * @b: second integer variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
