#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 1 0x0C. C - More malloc, free */

/**
 * string_nconcat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int la, lb;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	la = 0;
	while (s1[la] != '\0')
		la++;
	lb = 0;
	while (s2[lb] != '\0')
		lb++;

	if (n > lb)
		n = lb;

	s = malloc((la + n + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < la)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}

	return (s);

}
