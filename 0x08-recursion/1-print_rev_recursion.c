#include "main.h"
/* Task 1 0x08. C - Recursion  */

/**
 * _print_rev_recursion - Prints a string in revere
 * @s: String
 * Description: Prints a string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
