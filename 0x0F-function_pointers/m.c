#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 3 0x0F. C - Function pointers  */

/**
 * main - Main
 * @argc: Number of argumentes
 * @argv: Array of arguments
 *
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	int res;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (*(argv + 2) != 37 && *(argv + 2) != 43 && *(argv + 2) != 45 && *(argv + 2) != 42 && *(argv + 2) != 47)
	{
		printf("Error");
		exit(99);
	}
	if ((*(argv + 2) == 47 || *(argv + 2) == 37) && *(argv + 3) == 48)
	{
		printf("Error");
		exit(100);
	}


	res = (*get_op_func("+"))(4, 2);

	printf("%d\n", res);
	return (0);
}
