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
 * get_bit - returns the value of a bit at a given index
 * @n: Number
 * @index: Index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, cont;
	unsigned long int temp, p, j;

	if (n == 0)
	{
		if (index != 0)
			return (-1);
		else
			return (0);
	}

	p = 1, cont = 0, j = 0;
	while (n >= p)
	{
		p = p * 2;
		cont++;
		j++;
		if (cont == 64)
			break;
	}

	j--;
	for (i = cont - 1; i >= 0; i--)
	{
		temp = power2(i);
		if (index == j)
		{
			if (temp <= n)
				return (1);
			else
				return (0);
		}
		if (temp <= n)
			n = n - temp;
		j--;
	}
	return (-1);
}
