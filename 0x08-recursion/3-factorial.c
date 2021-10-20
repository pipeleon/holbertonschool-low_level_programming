#include "main.h"
/* Task 3 0x08. C - Recursion  */

/**
 * factorial - Returns the factorial of a given number
 * @n: Number
 * Description: Returns the factorial of a given number
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
