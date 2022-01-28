#include "hash_tables.h"
/* Task 1 0x1A. C - Hash tables */

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
    hash_node_t *new;    

    if (ht == NULL)
    {
        return (0);
    }
    if (key[0] == '\0')
        return (0);    

    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        return (0);
    }
    
    index = key_index((unsigned char *)key, ht->size);
    
    if (ht->array[index] == NULL)
    {        
        new->key = (char *)key;     
        new->value = (char *)value;       
        new->next = NULL;
        ht->array[index] = new;
    }
    else
    {
        new->key = (char *)key;       
        new->value = (char *)value;       
        new->next = ht->array[index];
        ht->array[index] = new;
    }

    return (1);
}