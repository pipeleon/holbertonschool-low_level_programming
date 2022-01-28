#include "hash_tables.h"
/* Task 1 0x1A. C - Hash tables */

/**
 * key_index - gives you the index of a key
 * @key: Key
 * @size: Size
 *
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;

    hash = hash_djb2((unsigned char *)key);

    return (hash % size);
}