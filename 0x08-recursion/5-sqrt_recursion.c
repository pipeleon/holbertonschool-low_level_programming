#include "main.h"
/* Task 5 0x08. C - Recursion  */

/**
 * _sqrt - Returns the natural square root
 * @a: Number to search
 * @n: Number to find sqrt
 * Description: Returns the natural square root
 * Return: int
 */
int _sqrt(int a, int n)
{
	int m;

	m = a;

	if (m * m <= n && (m + 1) * (m + 1) > n)
		return (m);
	else
		return (_sqrt((m + 1), n));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number
 * Description: Returns the natural square root of a number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int sq;

	if (n == 1)
		return (1);

	sq = _sqrt(2, n);
	if (sq * sq == n)
		return (sq);
	else
		return (-1);
}
