#include "lists.h"
/* Task 7 0x17. C - Doubly linked lists  */

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: List
 * @idx: Index
 * @n: New number
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *prev, *new;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp = *h;
	new->n = n;

	if (idx == 0)
	{
		temp = add_dnodeint(&(*h), n);
		return (temp);
	}

	for (i = 0; ; i++)
	{
		if (i == idx)
		{
			new->prev = prev;
			new->next = temp;
			prev->next = new;
			if (temp != NULL)
				temp->prev = new;
			break;
		}
		prev = temp;
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	return (new);
}
