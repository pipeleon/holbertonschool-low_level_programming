#include "main.h"
/* Task 2 0x02. C - Functions, nested loops  */

/**
 * print_alphabet_x10 - Print alphabet x10
 * Description: Print alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;

	while (i != 10)
	{
		for (j = 97; j<= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
