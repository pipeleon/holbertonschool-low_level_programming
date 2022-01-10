#include "main.h"
/* Task 1 0x07. C - Even more pointers, arrays and strings  */

/**
 * _memcpy - Copies memory area
 * @dest: Destiny of the copies
 * @src: Source of the copy
 * @n: How many copies to fill
 * Description: Copies memory area
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
