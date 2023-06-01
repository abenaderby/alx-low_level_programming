#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: list
 */

void free_list(list_t *head)
{
	list_t *lose;

	while (head)
	{
		lose = head->next;
		free(head->str);
		free(head);
		head = lose;
	}
}
