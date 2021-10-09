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
	if (n < 0)
	{
		n = (n * -1);
		_putchar(45);
	}
	if (n == 0)
		_putchar('0');
	else if (n > 0 && n < 10)
		_putchar('0' + n);
	else if (n >= 10 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 10000 && n < 100000)
	{
		_putchar('0' + (n / 10000));
		_putchar('0' + ((n / 1000) % 10));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100000 && n < 1000000)
	{
		_putchar('0' + (n / 100000));
		_putchar('0' + ((n / 10000) % 10));
		_putchar('0' + ((n / 1000) % 10));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 1000000 && n < 10000000)
	{
		_putchar('0' + (n / 1000000));
		_putchar('0' + ((n / 100000) % 10));
		_putchar('0' + ((n / 10000) % 10));
		_putchar('0' + ((n / 1000) % 10));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 10000000 && n < 100000000)
	{
		_putchar('0' + (n / 10000000));
		_putchar('0' + ((n / 1000000) % 10));
		_putchar('0' + ((n / 100000) % 10));
		_putchar('0' + ((n / 10000) % 10));
		_putchar('0' + ((n / 1000) % 10));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100000000 && n < 1000000000)
	{
		_putchar('0' + (n / 100000000));
		_putchar('0' + ((n / 10000000) % 10));
		_putchar('0' + ((n / 1000000) % 10));
		_putchar('0' + ((n / 100000) % 10));
		_putchar('0' + ((n / 10000) % 10));
		_putchar('0' + ((n / 1000) % 10));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
}
