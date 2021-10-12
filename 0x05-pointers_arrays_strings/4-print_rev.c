#include "main.h"
/* Task 4 0x05. C - Pointers, arrays and strings  */

/**
 * print_rev - Prints in reverse a string
 * @s: String to print in reverse
 * Description: Takes a string and prints it in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;
	int l;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		l++;
		i++;
	}

	for (j = l - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
