#include "main.h"
/* Task 3 0x06. C - More pointers, arrays and strings  */

/**
 * _strcmp - Compares two string
 * @s1: Fisrt string
 * @s2: Second string
 * Description: Compares two strings
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int p;

	p = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			p = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (p);
}
