#include "lists.h"
/* Task 1 0x17. C - Doubly linked lists  */

/**
 * dlistint_len - Prints the number of elements in a double linked list
 * @h: List
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		if (h->next != NULL)
			i += dlistint_len(h->next);
		i++;
	}

	return (i);
}
