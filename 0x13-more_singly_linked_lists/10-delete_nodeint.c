#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first node
 * @index: index of the node to deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hemp = *head;
	listint_t *now = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hemp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!hemp || !(hemp->next))
			return (-1);
		hemp = hemp->next;
		i++;
	}


	now = hemp->next;
	hemp->next = now->next;
	free(now);

	return (1);
}
