#include "lists.h"
/**
 * add_nodeint - adds a new node at start
 *
 * @head: pointer to the head node
 * @n: integer to be added
 *
 * Return: the address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
}
