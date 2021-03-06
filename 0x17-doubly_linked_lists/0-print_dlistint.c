#include "lists.h"
/* Task 0 0x17. C - Doubly linked lists  */

/**
 * print_dlistint - Prints all the elements of a double linked list
 * @h: List
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		printf("%d\n", h->n);
		if (h->next != NULL)
			i += print_dlistint(h->next);
		i++;
	}

	return (i);
}
