#include <stdio.h>
/* Task 0 0x0A. C - argc, argv  */

/**
 * main - Print the name of file
 * Description: Print the name of file
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
