#include "main.h"
#include <stdio.h>
/* Task 101 0x02. C - Functions, nested loops  */

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 * Description:  prints the sum of all the multiples of 3 or 5 below 1024
 * Return: void
 */
int main(void)
{
	int sum;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum = (sum + i);
		else if ((i % 5) == 0)
			sum = (sum + i);
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
