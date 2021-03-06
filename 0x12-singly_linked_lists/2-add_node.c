#include "lists.h"
/* Task 2 0x12. C - Singly linked lists  */

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Head of the list
 * @str: Strint to add
 *
 * Return: pointer to a list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;

	return (new);
}
