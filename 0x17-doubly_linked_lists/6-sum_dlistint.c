#include "lists.h"
/* Task 6 0x17. C - Doubly linked lists  */

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: List
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int suma;
	dlistint_t *temp, *c;

	if (head == NULL)
		return (0);

	temp = malloc(sizeof(dlistint_t));
	c = malloc(sizeof(dlistint_t));
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
