#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: list
 * @str: string
 * Return: the address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	int size = 0;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	while (str[size])
		size++;

	add->len = size;
	add->str = strdup(str);
	add->next = *head;
	*head = add;

	return (add);
}
