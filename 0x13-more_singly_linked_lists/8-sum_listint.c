#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data n
 * @head: assignment
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}
	return (sum);
}
