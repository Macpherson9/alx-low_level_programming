#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	unsigned int len = 0;

	temp = *head;
	while (str[len])
		len++;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;
	new->next = NULL;
	new->len = len;
	new->str = strdup(str);
	temp->next = new;

	return (new);
}
