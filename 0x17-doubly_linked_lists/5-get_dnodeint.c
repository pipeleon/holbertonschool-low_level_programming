#include "lists.h"
/* Task 5 0x17. C - Doubly linked lists  */

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: List
 * @index: Index
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *c;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	c = malloc(sizeof(dlistint_t));
	if (temp == NULL || c == NULL)
		return (NULL);

	i = 0;
	temp = head;
	c = temp;

	while (i != index)
	{
		temp = c;
		if (c->next == NULL)
			return (NULL);
		c = temp->next;
		i++;
	}

	return (c);
}
