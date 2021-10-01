#include <stdio.h>
/* Task 7 0x01 Variables, if, else, while  */

/**
 * main - Print reverse alphabet
 * Description: Print reverse alphabet
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
