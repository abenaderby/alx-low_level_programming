#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *p = *head;
	unsigned int size = 0;

	while (str[size])
		size++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = size;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (p->next)
		p = p->next;

	p->next = add;

	return (add);
}
