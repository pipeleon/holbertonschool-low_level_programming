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
	}/*
	if (argv[2] != "+" && argv[2] != "-" && argv[2] != "*" && argv[2] != "/" && argv[2] != "%")
	{
		printf("Error");
		exit(99);
	}
	if ((argv[2] != "/" || argv[2] != "%") && argv[3] != "0")
	{
		printf("Error");
		exit(100);
		}*/

	res = (*get_op_func("+"))(2, 3);

	printf("%d\n", res);
	return (0);
}
