#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked lists
 * @h: list
 * Return: (0) Always
 */

size_t list_len(const list_t *h)
{
	size_t check;

	check = 0;

	while (h)
	{
		h = h->next;
		check++;
	}

	return (check);
}
