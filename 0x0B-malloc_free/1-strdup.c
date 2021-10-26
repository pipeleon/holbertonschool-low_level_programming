#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 1 0x0B. C - malloc, free  */

/**
 * _strdup - returns a pointer to a copy of the string given
 * @str: String to copy
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int i;
	int l;
	char *s;

	if (str == NULL)
		return (NULL);

	l = 0;
	while (str[l] != '\0')
		l++;

	s = malloc((l - 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < l)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
