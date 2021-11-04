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
	char *o;
	int num;

	o = argv[2];
	num = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*o != '+' && *o != '-' && *o != '*' && *o != '/' && *o != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' || *o == '%') && num == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);
	return (0);
}
