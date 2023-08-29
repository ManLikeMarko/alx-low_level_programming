#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * @n: the new node
 * @head:the new head
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listin_t));

	if (new head == NULL)
	{
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
