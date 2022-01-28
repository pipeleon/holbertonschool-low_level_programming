#include "hash_tables.h"
/* Task 1 0x1A. C - Hash tables */

/**
 * hash_djb2 - implementing the djb2 algorithm
 * @str: String to get the hash code
 *
 * Return: Hash code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}