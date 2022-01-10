#include "main.h"
/* Task 0 0x04. C - More functions, more nested loops  */

/**
 * _isupper - Checks if c is a uppercase letter
 * @c: Parameter to check if it is uppercase or not
 * Description: lowercase characters
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
