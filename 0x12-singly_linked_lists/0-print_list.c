#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: string t check lenth
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * print_list - prints  elements of a list_t list
 * @h: pointer to head nod
 *
 * Return: No. of nods
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;

		i++;
	}
	return (i);
}
