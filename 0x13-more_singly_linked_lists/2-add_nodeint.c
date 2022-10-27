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
	listint_t *newNode;
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
