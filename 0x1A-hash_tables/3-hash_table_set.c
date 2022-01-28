#include "hash_tables.h"
/* Task 3 0x1A. C - Hash tables */

/**
 * _strcmp - Compares two string
 * @s1: Fisrt string
 * @s2: Second string
 * Description: Compares two strings
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int p;

	p = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			p = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (p);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: Hash Table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if success 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ht->array[index] = new;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (_strcmp(tmp->key, (char *)key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				free(new);
				return (1);
			}
			tmp = tmp->next;
		}
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
