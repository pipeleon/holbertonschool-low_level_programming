#include <stdio.h>
/* Task 4 0 Low Programming */

/**
 * main - Output with function puts
 * Description: Just print something
 * Return: 0
 */
int main(void)
{
	static const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, sizeof(str) - 1, 1, stdout);
	/* return an int */
	return (1);
}
