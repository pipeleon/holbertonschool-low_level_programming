#include "main.h"
/* Task 0 0x08. C - Recursion  */

/**
 * _puts_recursion - Prints a string
 * @s: String
 * Description: Prints a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return ();
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
