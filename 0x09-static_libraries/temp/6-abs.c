#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: the int to check
 * Return: the absolute value of int
 */

int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}
