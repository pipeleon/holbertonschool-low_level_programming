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
	int b;
	int c;

	c = 0;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49 + c; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (b != 57 && a != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
		c++;

	}
	putchar('\n');

	return (0);
}
