#include "lists.h"
/* Task 4 0x12. C - Singly linked lists  */

/**
 * free_listint2 - frees a list_t list
 * @head: Head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	if ((*head)->next != NULL)
		free_listint2(&(*head)->next);

	free(*head);
	if ((*head)->next == NULL)
		free(head);
}
