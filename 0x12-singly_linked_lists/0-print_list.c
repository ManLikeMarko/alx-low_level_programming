#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: input
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = o;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->str);
		h = h->next;
		s++;
	}
	return (s);
}
