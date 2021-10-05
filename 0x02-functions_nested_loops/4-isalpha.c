#include "main.h"
/* Task 4 0x02. C - Functions, nested loops  */

/**
 * _isalpha - Checks for lowercase and uppercase characters
 * @c: Parameter to check if it is lowercase or not
 * Description: lowercase characters
 * Return: void
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
