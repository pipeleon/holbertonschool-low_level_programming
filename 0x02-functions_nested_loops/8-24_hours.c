#include "main.h"
/* Task 8 0x02. C - Functions, nested loops  */

/**
 * jack_bauer - Prints every minute of the day
 * Description: Prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, e;

	for (a = 48; a <= 50; a++)
	{
		if (a == 50)
			e = 6;
		else
			e = 0;
		for (b = 48; b <= 57 - e; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
