#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    
    hash_table_set(ht, "hetairas", "cool");
    printf("%s : %s\n", ht->array[278]->key, ht->array[278]->value);

    hash_table_set(ht, "mentioner", "cool");
    printf("%s : %s\n", ht->array[278]->key, ht->array[278]->value);
    printf("%s : %s\n", ht->array[278]->next->key, ht->array[278]->next->value);
    return (EXIT_SUCCESS);
}
