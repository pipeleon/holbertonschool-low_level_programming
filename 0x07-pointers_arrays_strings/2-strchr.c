#include "main.h"
/* Task 2 0x07. C - Even more pointers, arrays and strings  */

/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character
 * Description: Locates a character in a string
 * Return: char
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	if (s[i] == '\0' && s[i] != c)
		p = 0;
	else
		p = &s[i];

	return (p);
}
