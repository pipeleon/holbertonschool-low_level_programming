#include <stdio.h>
#include "main.h"
/* Task 100 0x07. C - Even more pointers, arrays and strings  */

/**
 * set_string - Sets the value of a pointer to a char
 * @s: String
 * @to: Char
 * Description: Sets the value of a pointer to a char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
