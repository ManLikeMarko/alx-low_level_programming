#include "lists.h"
/**
 * free_listint - a function that frees a node in a listint_t list
 * @head: input/assignment
 *
 * Return; 0 always
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
