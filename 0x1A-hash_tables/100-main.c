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
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "h", "");
    shash_table_print(ht);
    
    shash_table_set(ht, "hell", "");
    shash_table_print(ht);
    
    shash_table_set(ht, "hell", "1");
    shash_table_print(ht);
    
    shash_table_set(ht, "ku", "2");
    shash_table_print(ht);
    
    shash_table_set(ht, "yu", "3");
    shash_table_print(ht);
    
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    
    shash_table_set(ht, "zu", "5");
    shash_table_print(ht);
    
    shash_table_set(ht, "zula", "6");
    shash_table_print(ht);
    
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);

    shash_table_set(ht, "mu", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
    shash_table_delete(ht);
    return (EXIT_SUCCESS);
}