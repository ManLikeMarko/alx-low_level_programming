#include "lists.h"
/**
 * listint_t - fxn that adds a node at the end of a listint_t list
 * @n: parameter
 * @head: parameter
 *
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new_tail = malloc(sizeof(listint_t));

	if (new_tail == NULL)
	{
		return (NULL);
	}
	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_tail;
	}

	return (new_tail);
}
