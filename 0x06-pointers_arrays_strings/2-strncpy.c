#include "main.h"
/* Task 2 0x06. C - More pointers, arrays and strings  */

/**
 * _strncpy - Copies string to another at n bytes
 * @dest: Destiny of the copy
 * @src: Source
 * @n: Number of bytes
 * Description: Appends strint to another
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int l;
	int m;
	char *p;

	l = 0;
	while (src[l] != '\0')
		l++;

	m = 0;
	while (dest[m] != '\0')
		m++;
	if (n < l)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else if (n >= l)
	{
		for (i = 0; i <= l; i++)
			dest[i] = src[i];
		for (i = l + 1; i < n; i++)
			dest[i] = '\0';
	}

	p = dest;
	return (p);
}
