#include "main.h"
/* Task 10 0x04. C - More functions, more nested loops  */

/**
 * print_triangle - Prints a triangle
 * @size: how large is the BASE OF THE triangle
 * Description: Prints a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int cont;

	cont = (size - 1);

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= cont; j++)
				_putchar(32);
			for (k = 1; k <= size - cont; k++)
				_putchar(35);
			_putchar('\n');
			cont--;
		}
	}
	else
		_putchar('\n');
}
