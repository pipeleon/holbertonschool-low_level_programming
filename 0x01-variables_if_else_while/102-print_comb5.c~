#include <stdio.h>
/* Task 101 0x01 Variables, if, else, while  */

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
	int d;
	int e;

	d = 0;
	e = 0;

	for (a = 48; a <= 55; a++)
	{
		for (b = 49 + d; b <= 56; b++)
		{
			for (c = 50 + e; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			e++;
		}
		d++;
		e = d;
	}
	putchar('\n');

	return (0);
}
