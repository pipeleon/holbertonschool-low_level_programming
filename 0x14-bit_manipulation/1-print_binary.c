#include "main.h"
/* Task 1 0x14. C - Bit manipulation  */

/**
 * power2 - return 2 to the power of n
 * @n: Number
 *
 * Return: void
 */
unsigned long int power2(int n)
{
	int i;
	unsigned long int res;

	i = 0, res = 1;
	while (i < n)
	{
		res = res * 2;
		i++;
	}

	return (res);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: Number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, cont;
	unsigned long int temp, p;

	printf("%lu\n", n);

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	p = 1, cont = 0;
	while (n >= p)
	{
		p = p * 2;
		cont++;
		if (cont == 64)
			break;
	}

	for (i = cont - 1; i >= 0; i--)
	{
		temp = power2(i);
		if (temp <= n)
		{
			_putchar(49);
			n = n - temp;
		}
		else
			_putchar(48);

	}
}
