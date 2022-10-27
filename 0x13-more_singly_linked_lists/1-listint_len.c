#include "lists.h"
#include <stdio.h>
/**
 * listint_len - number of elements linked
 * @h: pointer to the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
