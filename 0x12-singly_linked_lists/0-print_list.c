#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list
 * @h: list
 * Return: (0) Always
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		l++;
		h = h->next;
	}

	return (l);
}
