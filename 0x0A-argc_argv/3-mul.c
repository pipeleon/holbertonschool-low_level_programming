#include <stdio.h>
/* Task 3 0x0A. C - argc, argv  */

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
	unsigned int a;
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
		{
			a = ((a * 10) + s[j] - '0');
			if (s[j + 1] < 48 || s[j + 1] > 57)
				break;
		}
	}

	cont = 0;
	j = 0;
	while (cont != 1)
	{
		if (s[j] >= 48 && s[j] <= 57)
			cont = 1;
		if (s[j] == 45)
			a = (a * -1);
		j++;
	}
	return (a);
}

/**
 * main - multiplies two numbers
 * @argc: Count of the arguments supplied to the program
 * @argv: Array of pointers to the strings which are those arguments
 * Description: multiplies two numbers
 * Return: int
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int a, b, mul;

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
