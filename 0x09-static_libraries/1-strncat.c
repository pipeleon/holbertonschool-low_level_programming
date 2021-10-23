#include "main.h"
/* Task 1 0x06. C - More pointers, arrays and strings  */

/**
 * _strncat - Appends string to another at n bytes
 * @dest: Destiny of the appending
 * @src: Source
 * @n: Number of bytes
 * Description: Appends strint to another
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
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
		for (i = 0; i <= n - 1; i++)
			dest[m + i] = src[i];
	}
	else
	{
		for (i = 0; i <= l; i++)
			dest[m + i] = src[i];
	}

	p = dest;
	return (p);
}
