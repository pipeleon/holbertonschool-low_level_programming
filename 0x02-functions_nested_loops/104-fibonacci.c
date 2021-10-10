#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/* Task 104 0x02. C - Functions, nested loops  */

/**
 * main -  prints the first 98 Fibonacci numbers
 * Description:  prints the first 98 Fibonacci numbers
 * Return: void
 */
int main(void)
{
	long double a;
	long double b;
	long double c;
	long double ba;
	long double bb;
	int i;

	for (i = 1; i <= 98; i++)
	{
		if (i == 1)
		{
			printf("%d, ", i);
			a = 1;
			b = 2;
		}
		else if (i != 1 && i != 98)
		{
			if (b >= 100000000000000000000)
			{
				ba = (b / 1000000000);
				bb = (b % 1000000000);
				printf("%.0Lf%.0Lf, ", ba, bb);
			}
			printf("%.0Lf, ", b);
			c = b;
			b = (c + a);
			a = c;
		}
		else
		{
			ba = (b / 1000000000);
			bb = (b % 1000000000);
			printf("%.0Lf%.0Lf", ba, bb);
			putchar('\n');
		}
	}
	return (0);
}
