#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *str1;
	int n, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	str1 = (char *) malloc((len + 1) * sizeof(char));
	if (str1 == NULL)
		return (NULL);
	for (n = 0; n < len; n++)
		str1[n] = str[n];
	return (str1);
}

