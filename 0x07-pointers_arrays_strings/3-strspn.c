#include "main.h"
/* Task 3 0x07. C - Even more pointers, arrays and strings  */

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Prefix
 * Description: Gets the length of a prefix substring
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k, l, m, cont;

	l = 0;
	while (accept[l] != '\0')
		l++;
	m = 0;
	while (s[m] != '\0')
		m++;

	cont = 0;
	k = 1;
	if (m > 1)
	{
		while (k != 0)
		{
			for (j = 0; j < l; j++)
			{
				if (s[cont] == accept[j])
				{
					cont++;
					k = 1;
					break;
				}
				else
					k = 0;
			}
		}
	}
	return (cont);
}
