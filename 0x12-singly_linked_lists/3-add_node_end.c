#include "lists.h"
/* Task 3 0x12. C - Singly linked lists  */

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Head of the list
 * @str: Strint to add
 *
 * Return: pointer to a list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		*head = new;
	}
	else
		new = add_node_end(&((*head)->next), str);

	return (new);
}
