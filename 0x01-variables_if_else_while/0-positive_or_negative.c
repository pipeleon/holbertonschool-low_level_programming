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
		printf("%d is positive", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	if (n == 0)
		printf("%d is zero", n);
	/* return an int */
	return (0);
}
