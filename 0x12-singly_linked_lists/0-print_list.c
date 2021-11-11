#include "lists.h"
/* Task 0 0x12. C - Singly linked lists  */

/**
 * print_list - rints all the elements of a list_t list
 * @h: List
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		i += print_list(h->next);
	i++;

	return (i);
}
