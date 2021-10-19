#include "main.h"
/* Task 6 0x07. C - Even more pointers, arrays and strings  */

/**
 * print_chessboard - Prints the chessboard
 * @a: Board to print
 * Description: Prints the chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
