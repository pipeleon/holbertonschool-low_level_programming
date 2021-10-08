#include "main.h"
/* Task 8 0x04. C - More functions, more nested loops  */

/**
 * print_square - Prints a square
 * @size: how large is the square
 * Description: Prints a square
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
