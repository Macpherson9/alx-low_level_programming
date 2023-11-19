#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	len = strlen(*str);

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (head)
	{
		new->next = *head;
		new->str = strdup(str);
		new->len = len;
		*head = new;
	}
	return (new);
}
