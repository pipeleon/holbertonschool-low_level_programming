#include <stdio.h>
/* Task 9 0x01 Variables, if, else, while  */

/**
 * main - Print numbers
 * Description: Print numbers
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 48; a <= 56; a++)
	{
		putchar(a);
		putchar(44, 32);
	}
	putchar(57);
	putchar('\n');

	return (0);
}
