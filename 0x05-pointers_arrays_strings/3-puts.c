#include "main.h"
/* Task 3 0x05. C - Pointers, arrays and strings  */

/**
 * _puts - Prinst a string
 * @str: String to print
 * Description: Prints a string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
