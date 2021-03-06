#include "main.h"
/* Task 100 0x02. C - Functions, nested loops  */

/**
 * print_times_table - prints the any given number times table
 * @n: parameter to give the table
 * Description: prints the 9 times table
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (b = 0; b <= n; b++)
		{
			for (a = 0; a <= n; a++)
			{
				c = (b * a);
				if (a == 0)
					_putchar('0');
				else if ((c / 100) == 0 && a != 0)
				{
					_putchar(' ');
					if ((c / 10) == 0)
						_putchar(' ');
					else
						_putchar('0' + (c / 10));
				}
				else
				{
					_putchar('0' + (c / 100));
					_putchar('0' + ((c % 100) / 10));
				}
				if (a != 0)
					_putchar('0' + (c % 10));
				if (a != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
