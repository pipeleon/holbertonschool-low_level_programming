#include <stdio.h>
/* Task 4 0 Low Programming */

/**
 * main - Output with function puts
 * Description: Just print something
 * Return: 0
 */
int main(void)
{
	const char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDOUT_FILENO, x, strlen(x));
	/* return an int */
	return (1);
}
