#include "main.h"
/* Task 5 0x02. C - Functions, nested loops  */

/**
 * print_sign - Checks for the sign of any given number
 * @n: Parameter to check the sign
 * Description: lowercase characters
 * Return: Sign
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
