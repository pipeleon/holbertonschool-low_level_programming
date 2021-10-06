#include "main.h"
#include <stdio.h>
/* Task 102 0x02. C - Functions, nested loops  */

/**
 * main -  prints the first 50 Fibonacci numbers
 * Description:  prints the first 50 Fibonacci numbers
 * Return: void
 */
int main(void)
{
	long a;
	long b;
	long c;
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			printf("%d, ", i);
			a = 1;
			b = 2;
		}
		else if (i != 1 && i != 50)
		{
			printf("%lu, ", b);
			c = b;
			b = (c + a);
			a = c;
		}
		else
		{
			printf("%lu", b);
			putchar('\n');
		}
	}
	return (0);
}
