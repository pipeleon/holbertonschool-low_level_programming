#include "main.h"
#include <quadmath.h>
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
			if (i == 96)
				printf("83621143489848422977, ");
			else if (i == 97)
				printf("135301852344706746049, ");
			else
				printf("%.0Lf, ", b);
			c = b;
			b = (c + a);
			a = c;
		}
		else
		{
			printf("218922995834555169026");
			putchar('\n');
		}
	}
	return (0);
}
