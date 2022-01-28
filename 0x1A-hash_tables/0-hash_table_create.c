#include "hash_tables.h"
/* Task 0 0x1A. C - Hash tables */

/**
 * hash_table_create - creates a hash table
 * @size: Size of the hash table
 *
 * Return: pointer to a hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;

	new->array = malloc(size * sizeof(hash_node_t *));

	if (new->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}

	return (new);
}
