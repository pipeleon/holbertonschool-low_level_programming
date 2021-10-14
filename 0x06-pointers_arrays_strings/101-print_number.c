#include "main.h"
/* Task 101 0x06. C - More pointers, arrays and strings  */

/**
 * print_number - Prints an integer
 * @n: Int to print
 * Description: Prints an integer
 * Return: void
 */
void print_number(int n)
{
	int c, i, j, p;
	unsigned int m, nu;

	if (n == 0)
		_putchar('0' + n);
	else
	{
		if (n < 0)
			n = (n * -1), _putchar(45);

		nu = n, c = 0, m = n;

		while (m != 0)
			m = (m / 10), c++;

		if (c == 1)
			_putchar('0' + nu);
		else
		{
			j = (c - 1), p = 10;
			while (j != 1)
				p = (p * 10), j--;

			_putchar('0' + (nu / p));

			for (i = c - 2; i >= 1; i--)
			{
				j = i, p = 10;
				while (j != 1)
					p = (p * 10), j--;

				_putchar('0' + ((nu / p) % 10));
			}
			_putchar('0' + (nu % 10));
		}
	}
}
