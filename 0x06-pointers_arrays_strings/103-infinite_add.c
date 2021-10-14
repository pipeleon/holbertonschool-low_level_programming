#include "main.h"
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
	int l, m, i, j;
	char cont;
	char rf;
	char cont, rf;
	char *rp;

	l = 0, m = 0;
@@ -24,54 +23,46 @@ char *infinite_add(char *n1, char *n2, char *r, int size_r)
	while (n2[m] != '\0')
		m++;

	i = l - 1, j = m - 1;
	cont = 0;
	rp = 0;
	i = l - 1, j = m - 1, cont = 0, rp = 0;

	if (size_r > l && size_r > m)
	{
		if (l >= m)
		while (i >= 0)
		{
			while (i >= 0)
			if (j >= 0)
			{
				if (j >= 0)
				{
					rf = n1[i] + n2[j] + cont - 48;
					if (rf > 57)
						r[i] = rf - 10, cont = 1, j--, i--;
					else
						r[i] = rf, cont = 0, j--, i--;
				}
				rf = n1[i] + n2[j] + cont - 48;
				if (rf > 57)
					r[i] = rf - 10, cont = 1, j--, i--;
				else
				{
					rf = n1[i] + cont;
					if (rf > 57)
						r[i] = rf - 10, cont = 1, i--;
					else
						r[i] = rf, cont = 0, i--;
				}
					r[i] = rf, cont = 0, j--, i--;
			}
			if (cont == 1)
			else
			{
				if (size_r == l + 1)
				{
					r = rp;
				}
				rf = n1[i] + cont;
				if (rf > 57)
					r[i] = rf - 10, cont = 1, i--;
				else
				{
					for (i = l; i >= 1; i--)
						r[i] = r[i - 1];
					r[0] = 49;
				}
					r[i] = rf, cont = 0, i--;
			}
			if (size_r > l + 1)
				for (i = l + 1; i < size_r; i ++)
					r[i] = 0;
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
	{
		r = rp;
	}

	return (r);
}
