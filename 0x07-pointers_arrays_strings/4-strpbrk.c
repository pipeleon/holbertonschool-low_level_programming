#include "main.h"
/* Task 4 0x07. C - Even more pointers, arrays and strings  */

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Prefix
 * Description: Searches a string for any of a set of bytes
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j, i, l;
	char *p;

	l = 0;
	while (accept[l] != '\0')
		l++;

	p = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= l; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				break;
			}
		}
		if (p != 0)
			break;
	}

	return (p);
}
