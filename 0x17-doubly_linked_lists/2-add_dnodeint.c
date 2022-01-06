#include "lists.h"
/* Task 2 0x17. C - Doubly linked lists  */

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: List
 * @n: new int
 *
 * Return: dlisint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
