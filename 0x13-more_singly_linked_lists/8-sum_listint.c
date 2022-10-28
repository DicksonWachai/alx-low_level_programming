#include "lists.h"
/**
 * sum_listint - sum of all data(n)
 * @head: pointer to linked list
 *
 * Return: Sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
