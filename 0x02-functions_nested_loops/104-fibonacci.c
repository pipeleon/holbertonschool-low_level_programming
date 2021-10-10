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
	unsigned long a;
	unsigned long b;
	unsigned long c;
	unsigned long ba;
	unsigned long bb;
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
			if (i >= 90)
			{
				ba = (b / 1000000);
				bb = (b % 1000000);
				printf("%lu%lu, ", ba, bb);
				c = b;
				b = (c + a);
				a = c;
			}
			else
			{
				printf("%lu, ", b);
				c = b;
				b = (c + a);
				a = c;
			}
		}
		else
		{
			ba = (b / 1000000000);
			bb = (b % 1000000000);
			printf("%lu%lu", ba, bb);
			putchar('\n');
		}
	}
	return (0);
}
