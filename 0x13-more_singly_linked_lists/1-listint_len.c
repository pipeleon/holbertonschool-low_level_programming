#include "lists.h"
/* Task 1 0x12. C - Singly linked lists  */

/**
 * listint_len - returns the number of elements in a linked list_t list.
 * @h: List
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		if (h->next != NULL)
			i += listint_len(h->next);
		i++;
	}

	return (i);
}
