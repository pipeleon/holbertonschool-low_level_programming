#include "hash_tables.h"
/* Task 4 0x1A. C - Hash tables */

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key
 * 
 * Return: Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    char *value;
    unsigned long int index;
    hash_node_t *tmp;

    if (ht == NULL || key == NULL)
    {
        return (NULL);
    }
    
    if (key[0] == '\0')
    {
        return (NULL);
    }

    index = key_index((unsigned char *)key, ht->size);

    tmp = ht->array[index];

    if (tmp == NULL)
        return (NULL);
    
    while(tmp)
    {
        if (_strcmp(tmp->key, (char *)key) == 0)
        {
            value = tmp->value;
            return (value);
        }
        tmp = tmp->next;
    }

    return (NULL);
}