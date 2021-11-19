#include "main.h"
/* Task 0 0x14. C - Bit manipulation  */

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: Binary in string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, p;
	int i;
	int len;

	if (b == NULL)
		return (0);
	len = 0;
	while (*(b + len) != '\0')
		len++;

	a = 0;
	p = 1;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			a += p;
		else if (b[i] == '0')
			a += 0;
		else
			return (0);
		p = p * 2;
	}

	return (a);
}
