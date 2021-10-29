#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 100 0x0B. C - malloc, free  */

/**
 * str_concat -  concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int la, lb;
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

	s = malloc((la + lb) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < la)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lb)
	{
		s[i] = s2[j];
		i++;
		j++;
	}

	return (s);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	s = "";
	while (ac--)
	{
		s = str_concat(s, *av++);
		s = str_concat(s, "\n");
	}

	return (s);
}
