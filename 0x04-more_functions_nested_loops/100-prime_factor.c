#include <stdio.h>
#include "main.h"
/* Task 100 0x04. C - More functions, more nested loops  */

/**
 * main - Prime factors
 * Description: prime factors
 * Return: int
 */
int main(void)
{
	long int i;
	long int n;
	long int m;
	long int ind;
	long int resp;
	long int k;

	n = 612852475143;
	m = n;
	ind = 1;

	while (ind != 0)
	{
		for (i = 2; i <= m; i++)
		{
			if (m % i == 0)
			{
				resp = (m / i);
				if (resp == 1)
				{
					k = i;
					ind = 0;
					break;
				}
				else
				{
					m = resp;
					ind = 1;
					break;
				}
			}
		}
	}

	printf("%ld", k);
	putchar('\n');
	return (0);
}
