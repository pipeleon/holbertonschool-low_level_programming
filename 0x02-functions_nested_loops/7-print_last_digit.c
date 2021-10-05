#include "main.h"
/* Task 7 0x02. C - Functions, nested loops  */

/**
 * print_last_digit - Print the last digit
 * @a: Any given number
 * Description: Print the last digit
 * Return: int
 */
int print_last_digit(int a)
{
	int z;

	if (a < 0)
		z = ((a % 10) * -1);
	else
		z = (a % 10);

	_putchar('0' + z);

	return (z);
}
