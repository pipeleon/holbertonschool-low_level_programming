#include "lists.h"
/* Task 10 0x12. C - Singly linked lists  */

/**
 * delete_nodeint_at_index - Delate a specific  node
 * @head: Head of the list
 * @index: Index
 *
 * Return: void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *c;

	if (*head == NULL)
		return (-1);

	temp = malloc(sizeof(listint_t));
	c = malloc(sizeof(listint_t));
	if (temp == NULL || c == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		*head = temp;
		return (1);
	}

	i = 0;
	temp = *head;
	c = temp;

	while (i != index)
	{
		temp = c;
		if (c->next == NULL)
			return (-1);
		c = temp->next;
		i++;
	}

	temp->next = c->next;

	return (1);
}
