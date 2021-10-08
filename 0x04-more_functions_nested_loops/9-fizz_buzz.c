#include <stdio.h>
#include "main.h"
/* Task 9 0x04. C - More functions, more nested loops  */

/**
 * main - The “Fizz-Buzz test”
 * Description: The “Fizz-Buzz test”
 * Return: int
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
	
}
