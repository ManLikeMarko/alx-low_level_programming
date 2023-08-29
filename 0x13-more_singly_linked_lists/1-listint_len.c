#include "lists.h"
/**
 * listint_len - returns number of elemts in  a listint list
 * @h: the head node
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		count_node++;
		h = h->next;
	}
	return (count_node);
}
