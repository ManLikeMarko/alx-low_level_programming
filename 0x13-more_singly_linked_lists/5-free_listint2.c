#include "lists.h"
/**
 * free_listint2 - fxn that frees a listint
 * @head: assignment
 *
 * Return: 0 always
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
