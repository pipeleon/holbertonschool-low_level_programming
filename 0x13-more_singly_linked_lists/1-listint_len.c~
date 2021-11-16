#include "lists.h"
/* Task 1 0x12. C - Singly linked lists  */

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: List
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		if (h->next != NULL)
			i += list_len(h->next);
		i++;
	}

	return (i);
}
