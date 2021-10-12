#include "main.h"
/* Task 7 0x05. C - Pointers, arrays and strings  */

/**
 * puts_half - Prints half a string
 * @str: String to print half
 * Description: Takes a string and prints it in half
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int l;
	int h;

	i = 0;
	l = 0;
	while (str[i] != '\0')
	{
		l++;
		i++;
	}

	if (l % 2 == 0)
		h = l / 2;
	else
		h = (l - 1) / 2;

	for (j = h + 1; j <= l; j++)
		_putchar(str[j]);
	_putchar('\n');
}
