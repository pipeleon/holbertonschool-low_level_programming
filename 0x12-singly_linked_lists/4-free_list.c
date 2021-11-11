#include "lists.h"
/* Task 4 0x12. C - Singly linked lists  */

/**
 * free_list - frees a list_t list
 * @head: Head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);

	free(head->str);
	free(head);
}
