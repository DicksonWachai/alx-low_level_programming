#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * @head: a pointer to the head of the list_t
 * @str: the string to be added to the list_t
 *
 * Return: NULL or the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	new->str = dup;
	ne->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
