#include "lists.h"
/**
 * add_nodeint - adds node at the start
 * @h: pointer to pointer for head node
 * @n: integer
 *
 * Return: Address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
