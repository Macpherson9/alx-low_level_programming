#include "main.h"

/**
 * _strcmp - that compares two string
 * @s1: pointer to first string
 * @s2: pointer to the second string
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
