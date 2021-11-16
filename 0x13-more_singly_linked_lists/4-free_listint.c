#include "lists.h"
/* Task 4 0x12. C - Singly linked lists  */

/**
 * free_listint - frees a list_t list
 * @head: Head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_listint(head->next);

	free(head);
}
