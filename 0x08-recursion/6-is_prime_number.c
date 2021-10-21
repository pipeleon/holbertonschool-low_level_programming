#include "main.h"
/* Task 6 0x08. C - Recursion  */

/**
 * _prime - Evalulates the modular operation to prime
 * @a: Number to search
 * @n: Number to find if it is prime
 * Description: Evaluates the modular operation to prime
 * Return: int
 */
int _prime(int a, int n)
{
	int m;

	m = a;

	if (n == m)
		return (1);

	if (n % m == 0)
		return (0);

	m = _prime((m + 1), n);

	return (m);
}


/**
 * is_prime_number - Evaluates if the number is prime or not
 * @n: Number
 * Description: Evaluates if the number is prime or not
 * Return: int
 */
int is_prime_number(int n)
{
	int p;

	if (n <= 1)
		return (0);

	p = _prime(2, n);

	return (p);
}
