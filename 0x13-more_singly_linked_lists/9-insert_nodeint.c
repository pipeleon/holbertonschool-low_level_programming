#include "lists.h"
/* Task 9 0x12. C - Singly linked lists  */

/**
 * insert_nodeint_at_index - Insert new node
 * @head: Head of the list
 * @idx: Index
 * @n: New number
 *
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *c, *new;

	if (*head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	c = malloc(sizeof(listint_t));
	if (temp == NULL || c == NULL)
		return (NULL);

	i = 0;
	temp = *head;
	c = temp;

	while (i != idx)
	{
		temp = c;
		if (c->next == NULL)
			return (NULL);
		c = temp->next;
		i++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = c;
	temp->next = new;

	return (new);

}
