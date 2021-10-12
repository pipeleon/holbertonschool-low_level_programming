#include "main.h"
/* Task 9 0x05. C - Pointers, arrays and strings  */

/**
 * _strcpy - Copies string to another
 * @dest: Destiny of the copy
 * @src: Source to copy from
 * Description: Copies strint to another
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int l;
	char *p;

	i = 0;
	l = 0;
	while (src[i] != '\0')
	{
		l++;
		i++;
	}


	for (j = 0; j <= l; j++)
		dest[j] = src[j];
	p = dest;
	return (p);
}
