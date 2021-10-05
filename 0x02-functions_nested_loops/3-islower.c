#include "main.h"
/* Task 3 0x02. C - Functions, nested loops  */

/**
 * _islower - Checks for lowercase characters
 * Description: lowercase characters
 * Return: void
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
