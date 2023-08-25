#include "lists.h"
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginng
 * @head: singly linned lst
 * @str: consttan string
 *
 * Return: singly linned list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;
	char *dup;

	new = malloc(sizeof(list_t));

	if (new == NULL)

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (length = 0; dup[length];)
		length++;

	new->str = dup;
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
