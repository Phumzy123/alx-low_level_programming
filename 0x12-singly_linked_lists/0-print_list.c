#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to the list_t list to print
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t g = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		g++;
	}

	return (g);
}

