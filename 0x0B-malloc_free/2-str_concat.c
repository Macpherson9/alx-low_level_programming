#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int j = 0;
	int tlen = len1 + len2;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1])
			len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2])
			len2++;
	}
	str = (char *) malloc((tlen + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	while (i < tlen)
	{
		str[i] = s2[j];
		j++
	}
	str[i] = '\0';

	return (str);
}
