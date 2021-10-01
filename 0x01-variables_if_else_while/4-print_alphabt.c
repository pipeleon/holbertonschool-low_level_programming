#include <stdio.h>
/* Task 4 0x01 Variables, if, else, while  */

/**
 * main - Print lower case letter without q and e
 * Description: Print lower case leters
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 101 || a != 113)
			putchar(a);
	}

	printf("\n");

	return (0);
}
