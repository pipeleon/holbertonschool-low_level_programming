#include "main.h"
/* Task 2 0x08. C - Recursion  */

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String
 * Description: Returns the length of a string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
		return (0);

	len = len + _strlen_recursion(s + 1);
	len++;

	return (len);
}
