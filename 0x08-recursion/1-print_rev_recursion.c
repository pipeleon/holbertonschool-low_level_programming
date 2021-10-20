#include "main.h"
/* Task 1 0x08. C - Recursion  */

/**
 * _print_rev_recursion - Prints a string in revere
 * @s: String
 * Description: Prints a string in reverse
 * Return: void
 */
int len(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + len(s) - 1));
	_print_rev_recursion(s + 1);
}
