#include "lists.h"
/* Task 0 0x12. C - Singly linked lists  */

/**
 * print_listint - prints all the elements of a list_t list
 * @h: List
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		printf("%d\n", h->n);
		if (h->next != NULL)
			i += print_listint(h->next);
		i++;
	}

	return (i);
}
