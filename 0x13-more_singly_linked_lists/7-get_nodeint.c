#include "lists.h"
/* Task 4 0x12. C - Singly linked lists  */

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: Head of the list
 * @index: Index node
 *
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *c;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	c = malloc(sizeof(listint_t));
	if (temp == NULL || c == NULL)
		return (0);

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
