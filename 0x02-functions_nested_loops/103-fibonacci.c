#include "main.h"
#include <stdio.h>
/* Task 103 0x02. C - Functions, nested loops  */

/**
 * main -  prints the sume of the even fibonacci
 * Description:  prints the sume of the even Fibonacci numbers
 * Return: void
 */
int main(void)
{
	long a;
	long b;
	long c;
	long suma;

	a = 1;
	b = 2;
	suma = 0;

	while (b <= 4000000)
	{
		if ((b % 2) == 0)
			suma = (suma + b);
		c = b;
		b = (c + a);
		a = c;
	}
	printf("%lu", suma);
	putchar('\n');
	return (0);
}
