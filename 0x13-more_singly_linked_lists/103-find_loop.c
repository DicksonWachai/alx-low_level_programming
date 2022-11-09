#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *flash;

	if (head == NULL || head->next == NULL)
		return (NULL);

	snail = head->next;
	flash = (head->next)->next;

	while (flash)
	{
		if (snail == flash)
		{
			snail = head;

			while (snail != flash)
			{
				snail = snail->next;
				flash = flash->next;
			}

			return (snail);
		}

		snail = snail->next;
		flash = (flash->next)->next;
	}

	return (NULL);
}
