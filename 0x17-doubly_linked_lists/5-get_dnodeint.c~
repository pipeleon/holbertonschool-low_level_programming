#include "lists.h"
/* Task 4 0x17. C - Doubly linked lists  */

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: List
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_dlistint(head->next);

	free(head);
}
