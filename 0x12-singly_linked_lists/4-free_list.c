#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *hemp;

	while (head)
	{
		hemp = head->next;
		free(head->str);
		free(head);
		head = hemp;
	}
}
