#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 3 0x0F. C - Function pointers  */

/**
 * op_add - Adding
 * @a: Number 1
 * @b: Number 2
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracting
 * @a: Number 1
 * @b: Number 2
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: Number 1
 * @b: Number 2
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Dividing
 * @a: Number 1
 * @b: Number 2
 *
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulling
 * @a: Number 1
 * @b: Number 2
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
