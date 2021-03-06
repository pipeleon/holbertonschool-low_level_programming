#include "lists.h"
/* Task 4 0x12. C - Singly linked lists  */

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: Head of the list
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (0);

	i = (*head)->n;

	temp = (*head)->next;
	*head = temp;
	
	return (i);
}
