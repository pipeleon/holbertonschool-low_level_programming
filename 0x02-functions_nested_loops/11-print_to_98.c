#include "main.h"
#include <stdio.h>
/* Task 11 0x02. C - Functions, nested loops  */

/**
 * print_to_98 - Prints to 98
 * @n: Parameter to go to 98
 * Description: prints to 98
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n == 98)
		printf("%d", n);
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d", j);
		}
	}
	_putchar('\n');
}
