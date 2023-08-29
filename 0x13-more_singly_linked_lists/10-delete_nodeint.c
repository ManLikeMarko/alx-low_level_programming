#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node of index
 * @head: assignment
 * @index: assignment
 *
 * Return: 1 if it succeeded, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			listint_t *temp = current;
			previous->next = current->next;
			free(temp);
			return (1);
		}

		previous = current;
		current = current->next;
		count++;
	}

	return (-1);
}
