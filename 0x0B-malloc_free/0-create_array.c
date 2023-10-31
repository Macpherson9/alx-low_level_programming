#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *result;

	if (size == 0)
		return (NULL);
	result = (char *)malloc(size * sizeof(char));
	result[0] = c;
	return (result);
}
