#include <stdio.h>
/* Task 2 0x0A. C - argc, argv  */

/**
 * main - Prints the number of arguments passed into it
 * @argc: Count of the arguments supplied to the program
 * @argv: Array of pointers to the strings which are those arguments
 * Description: Prints the number of arguments passed into it
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i ++)
	printf("%s\n", argv[i]);
	return (0);
}
