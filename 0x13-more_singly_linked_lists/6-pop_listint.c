#include "lists.h"
/**
 * pop_listint - a function the deletes the head node
 * @head: assignment
 *
 * Returns: the head node data
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	temp = *head;

	*head = (*head)->next;

	free(temp);

	return (value);
}
