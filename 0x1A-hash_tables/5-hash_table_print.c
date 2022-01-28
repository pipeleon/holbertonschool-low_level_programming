#include "hash_tables.h"
/* Task 5 0x1A. C - Hash tables */

/**
 * hash_table_print -  prints a hash table
 * @ht: Hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next, flag = 1;
		}
	}
	printf("}\n");
}
