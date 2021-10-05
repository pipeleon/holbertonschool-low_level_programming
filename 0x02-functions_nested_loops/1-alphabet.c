#include "main.h"
/* Task 1 0x02. C - Functions, nested loops  */

/**
 * main - Print alphabet
 * Description: Print alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
