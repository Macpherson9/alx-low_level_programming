#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: the number that will be converted
 * Return - void
 */

void print_binary(unsigned long int n)
{
	unsigned long int max_bits = 8 * sizeof(n);

	if (n == 0)
	{
		printf("0");
		return;
	}

	char binary_string[max_bits + 1];
	unsigned int i = 0;
	unsigned long int remainder;

	while (n != 0 && i < max_bits)
	{
		remainder = n & 1;
		binary_string[max_bits - i - 1] = remainder + '0';
		n >>= 1;
		i++;
	}
	binary_string[max_bits] = '\0';
	printf("%s", binary_string);
}
