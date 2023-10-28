#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string inputted
 * Return: an interger
 */

int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	return (sum);
}

