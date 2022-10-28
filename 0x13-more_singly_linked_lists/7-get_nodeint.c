#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node
 * @head: pointer to the header list
 * @index: index of node to locate
 *
 * Return: NULL or the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
