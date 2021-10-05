#include "main.h"
/* Task 9 0x02. C - Functions, nested loops  */

/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int n;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 9; a++)
		{
			n = (b * a);
			if (a == 0)
				_putchar('0');
			else if ((n / 10) == 0 && a != 0)
				_putchar(' ');
			else
				_putchar('0' + (n / 10));
			if (a != 0)
				_putchar('0' + (n % 10));
			if (a != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
