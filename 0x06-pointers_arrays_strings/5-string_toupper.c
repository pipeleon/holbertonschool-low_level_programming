#include "main.h"
/* Task 5 0x06. C - More pointers, arrays and strings  */

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: String to analize
 * Description: Changes all lowercase letters of a string to uppercase
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;
	int l;

	l = 0;
	while (a[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}

	return (a);
}
