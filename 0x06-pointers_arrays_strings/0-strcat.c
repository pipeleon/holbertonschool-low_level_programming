#include "main.h"
/* Task 0 0x06. C - More pointers, arrays and strings  */

/**
 * _strcat - Appends string to another
 * @dest: Destiny of the appending
 * @src: Source
 * Description: Appends strint to another
 * Return: char
 */
char *_strcat(char *dest, char *src)
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

	for (i = 0; i <= l; i++)
		dest[m + i] = src[i];

	p = dest;
	return (p);
}
