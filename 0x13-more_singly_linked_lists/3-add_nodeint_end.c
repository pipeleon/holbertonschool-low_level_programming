#include "lists.h"
/* Task 3 0x12. C - Singly linked lists  */

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: Head of the list
 * @n: Strint to add
 *
 * Return: pointer to a list_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new;

	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	else
		new = add_nodeint_end(&((*head)->next), n);

	return (new);
}
