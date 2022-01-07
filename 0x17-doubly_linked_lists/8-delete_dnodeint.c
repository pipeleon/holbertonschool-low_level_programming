#include "lists.h"
/* Task 8 0x17. C - Doubly linked lists  */

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint
 * @head: List
 * @index: Index
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *prev, *next;

	if (head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		prev = temp->next;
		if (prev != NULL)
			prev->prev = NULL;
		*head = prev;
		free(temp);
		return (1);
	}

	for (i = 0; ; i++)
	{
		if (i == index)
		{
			if (temp != NULL)
			{
				prev->next = next;
				next->prev = prev;
				free(temp);
			}
			break;
		}
		prev = temp;
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		next = temp->next;
	}

	return (1);
}
