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
int main(int argc, char *argv[])
{
	int res;
	char *o;
	int num;
	int a;
	char z, x;

	a = argc;
	if (a != 4)
	{
		printf("Error\n");
		exit(98);
	}

	o = argv[2];
	num = atoi(argv[3]);
	z = o[1];
	x = '\0';

	if ((*o != '+' && *o != '-' && *o != '*' && *o != '/' && *o != '%') || z != x)
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
