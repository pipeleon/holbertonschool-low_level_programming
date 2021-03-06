#include "main.h"
/* Task 4 0x08. C - Recursion  */

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Number
 * @y: Power
 * Description: Returns the value of x raised to the power of y
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
