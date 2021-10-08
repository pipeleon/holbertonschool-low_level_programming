#include "main.h"
/* Task 7 0x04. C - More functions, more nested loops  */

/**
 * print_diagonal - Prints a diagonal
 * @n: number of diagonals
 * Description: Prints diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		_putchar(92);
		_putchar('\n');

		if (n > 1)
		{
			for (i = 2; i <= n; i++)
			{
				for (j = 1; j <= (i - 1); j++)
					_putchar(32);
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
