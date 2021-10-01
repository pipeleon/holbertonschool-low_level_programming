#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Task 1 0x01 Variables, if, else, while  */


/**
 * main - Print las Digit of a int
 * Description: Print last Digit os a int
 * Return: 0
 */

int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = (n % 10);
	/* your code goes there */
	if (z > 5)
	{
		printf("Last digit of %i is %d and is greater than 5", n, z);
	}
	else if (z == 0)
	{
		printf("Last digit of %i is %d and is 0", n, z);
	}
	else if (z < 6)
	{
		printf("Last digit of %i is %d and is less than 6 and not 0", n, z);
	}

return (0);
}
