#include "main.h"
/* Task 6 0x05. C - Pointers, arrays and strings  */

/**
 * _puts2 - Prinst a string
 * @str: String to print
 * Description: Prints a string
 * Return: void
 */
void _puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
