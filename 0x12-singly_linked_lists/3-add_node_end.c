#include "lists.h"

/**
 * add_node_end - adds a new node at end of list
 * @head: singly linked lst
 * @str: constnt str
 *
 * Return: sinly lingke liost
 */

list_t *add_node_end(list_t *head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
