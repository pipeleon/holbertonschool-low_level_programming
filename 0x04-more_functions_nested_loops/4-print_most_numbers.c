#include "main.h"
/* Task 4 0x04. C - More functions, more nested loops  */

/**
 * print_most_numbers - Prints numbers
 * Description: Prints number
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
