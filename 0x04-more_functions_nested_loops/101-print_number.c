#include "main.h"
/* Task 100 0x04. C - More functions, more nested loops  */

/**
 * print_number - Prints numbers
 * @n: number to print
 * Description: Prints number
 * Return: void
 */
void print_number(int n)
{
	int m, c, i, j, p;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			n = (n * -1);
			_putchar(45);
		}

		c = 0;
		m = n;

		while (m != 0)
		{
			m = (m / 10);
			c++;
		}

		if (c == 1)
			_putchar('0' + n);
		else
		{
			j = (c - 1), p = 10;
			while (j != 1)
			{
				p = (p * 10);
				j--;
			}
			_putchar('0' + (n / p));

			for (i = c - 2; i >= 1; i--)
			{
				j = i, p = 10;
				while (j != 1)
				{
					p = (p * 10);
					j--;
				}
				_putchar('0' + ((n / p) % 10));

			}
			_putchar('0' + (n % 10));
		}
	}
}
