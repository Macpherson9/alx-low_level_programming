#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a constant string
 * Return: unsigned int 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, len = 0, power = 1;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' || b[len] != '1')
			return (0);
	}
	for (--len; len > = 0; power *= 2, len--)
	{
		if (b[len] == '1')
			result += power;
	}
	return (result);
}

