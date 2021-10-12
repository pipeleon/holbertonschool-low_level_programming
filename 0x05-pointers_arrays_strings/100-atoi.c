#include "main.h"
/* Task 100 0x05. C - Pointers, arrays and strings  */

/**
 * _atoi - convert a string to an integer
 * @s: String to convert
 * Description: convert a string to an integer.
 * Return: void
 */
int _atoi(char *s)
{
	int i;
	int j;
	int l;
	int a;
	int cont;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		l++;
		i++;
	}

	cont = 0;
	a = 0;

	for (j = 0 + cont; j <= l - 1; j++)
	{
		if (s[j] >= 48 && s[j] <= 57)
			a = (a*10 + s[j] - '0');
	}

	for (j = 0; j <= l -1; j++)
	{
		if (s[j] == 45)
			a = (a * -1);
	}
	return (a);
}
