#include <stdio.h>
#include "main.h"
/* Task 104 0x06. C - More pointers, arrays and strings  */

/**
 * print_buffer - Prints a buffer
 * @b: Buffer to print
 * @size: Size of buffer
 * Description: Prints a buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	i = 0, k = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			printf("%08x: ", i);
			for (j = 0; j < 10; j++)
			{
				if (i + j < size)
					printf("%02x", b[i + j]);
				else
					printf("  ");
				if (j % 2 != 0)
					printf(" ");
			}
			if (k == 1)
			{
				for (j = 0; i + j < size; j++)
				{
					if ((b[i + j] >= 0 && b[i + j] <= 31))
						printf(".");
					else
						printf("%c", b[i + j]);
				}
			}
			else
			{
				for (j = 0; j < 10; j++)
				{
					if ((b[i + j] >= 0 && b[i + j] <= 31))
						printf(".");
					else
						printf("%c", b[i + j]);
				}
			}
			putchar('\n');
			i = i + 10;
			if (size - i < 10)
				k = 1;
		}
	}
	else
		putchar('\n');
}
