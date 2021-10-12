#include "main.h"
/* Task 2 0x05. C - Pointers, arrays and strings  */

/**
 * _strlen - Length of a string
 * @s: String to calculate length
 * Description: Calculates the length of a String
 * Return: int
 */
int _strlen(char *s)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}
