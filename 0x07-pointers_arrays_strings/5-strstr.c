#include "main.h"
/* Task 5 0x07. C - Even more pointers, arrays and strings  */

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: String
 * Description: Locates a substring
 * Return: int
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j, i, l;
	char *p;

	l = 0;
	while (needle[l] != '\0')
		l++;

	p = 0;
	if (l == 0)
		p = &haystack[0];
	else
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[0])
			{
				for (j = 1; j < l; j++)
				{
					if (haystack[i + j] == needle[j])
						p = &haystack[i];
					else
						break;
				}
			}
		}
	}
	return (p);
}
