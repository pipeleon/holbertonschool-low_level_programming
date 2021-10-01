#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Task 0 Varibles If else while */

/**
 * main - Use of If
 * Description: Use of If
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
/* return an int */
	return (0);
}
