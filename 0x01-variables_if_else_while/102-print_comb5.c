#include <stdio.h>
/* Task 102 0x01 Variables, if, else, while  */

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
	int f;
	int g;

	e = 0;
	f = 0;
	g = 0;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57 - g; b++)
		{
			for (c = 48 + f; c <= 57; c++)
			{
				for (d = 49 + e; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a != 57 || b != 56 || c != 57 || d != 57)
					{
						putchar(32);
						putchar(44);
					}

				}

			}
			if (b != 56)
			{
				e++;
			}
			else
			{
				e = 0;
			}
		}
		if (a == 56)
			g = 1;
		f++
	}
	putchar('\n');

	return (0);
}
