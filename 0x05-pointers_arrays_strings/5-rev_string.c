#include "main.h"
/* Task 5 0x05. C - Pointers, arrays and strings  */

/**
 * rev_string - Calculate in reverse a string
 * @s: String to calculate in reverse
 * Description: Takes a string and calculate it in reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int l;
	char r[];

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		l++;
		i++;
	}

	i = 0;
	for (j = l - 1; j >= 0; j--)
	{
		r[i] = s[j];
		i++;
	}

	*s = r;
}
