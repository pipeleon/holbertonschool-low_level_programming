#include <stdio.h>
#include "main.h"
/**
 * _sizeof - Calculete how large is the string given
 * @n: String to calculate
 * Description: Calculates how large is the string given
 * Return: int
 */
int _sizeof(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
		i++;
	return (i);
}
/* Task 103 0x06. C - More pointers, arrays and strings  */

/**
 * infinite_add - Adds two numbers
 * @n1: Firts number to add
 * @n2: Second number to add
 * @r: Where it wil be stored the adding
 * @size_r: Size of buffer
 * Description: Adds two numbers
 * Return: void
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l, m, i, j, k;
	char cont, rf;
	char *rp;

	l = _sizeof(n1);
	m = _sizeof(n2);
	i = l - 1, j = m - 1, cont = 0, rp = 0;
	if (size_r > l && size_r > m)
	{
		while (i >= 0)
		{
			if (j >= 0)
				k = 1;
			else
				k = 0;
			rf = n1[i] + (n2[j] * k) + cont - (48 * k);
			if (rf > 57)
				r[i] = rf - 10, cont = 1, j--, i--;
			else
				r[i] = rf, cont = 0, j--, i--;
		}
		if (cont == 1)
		{
			if (size_r == l + 1)
				r = rp;
			else
			{
				for (i = l; i >= 1; i--)
					r[i] = r[i - 1];
				r[0] = 49;
			}
		}
		if (size_r > l + 1)
			for (i = l + 1; i < size_r; i++)
				r[i] = 0;
	}
	else
		r = rp;
	return (r);
}
