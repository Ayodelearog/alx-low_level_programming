#include "lists.h"

/**
 * print_list - a function that prints the elements of a linked list.
 * @h: the head node of the list.
 * Return: the number of nodes if successful.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
