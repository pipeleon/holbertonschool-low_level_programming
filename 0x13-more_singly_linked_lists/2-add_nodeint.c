#include "lists.h"
/* Task 2 0x12. C - Singly linked lists  */

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: Head of the list
 * @n: Strint to add
 *
 * Return: pointer to a list_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;

	return (new);
}
