#include "lists.h"
/* Task 4 0x12. C - Singly linked lists  */

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: Head of the list
 *
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int suma;
	listint_t *temp, *c;

	if (head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));
	c = malloc(sizeof(listint_t));
	if (temp == NULL || c == NULL)
		return (0);

	suma = 0;
	temp = head;
	c = temp;

	while (c != NULL)
	{
		temp = c;
		suma += temp->n;
		c = temp->next;
	}


	return (suma);
}
