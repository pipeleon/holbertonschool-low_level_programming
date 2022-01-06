#include "lists.h"
/* Task 3 0x17. C - Doubly linked lists  */

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: List
 * @n: new int
 *
 * Return: dlisint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		new->prev = current;
		current->next = new;
	}

	return (new);
}
