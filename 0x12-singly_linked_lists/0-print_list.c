#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */


size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		counter++;
	}
	return (counter);
}

