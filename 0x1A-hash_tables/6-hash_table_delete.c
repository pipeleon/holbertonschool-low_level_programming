#include "hash_tables.h"
/* Task 6 0x1A. C - Hash tables */

/**
 * hash_table_delete -  delete a hash table
 * @ht: Hash table
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp->next;
		}
	}
	free(ht);
}
