#include <stdio.h>
/* Task 100 0x0A. C - argc, argv  */

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
 * main - prints the minimum number of coins to make change for an amount
 * @argc: Count of the arguments supplied to the program
 * @argv: Array of pointers to the strings which are those argument
 * Description: prints the minimum number of coins to make change for an amount
 * Return: int
 */
int main(int argc, char **argv)
{
	int c, t, temp;


	if (argc != 2)
		printf("Error\n"), return (1);
	c = 0;
	t = _atoi(argv[1]);
	if (_atoi(argv[1]) < 0)
		printf("%d\n", c);
	else
	{
		if (t >= 25)
		{
			c += t / 25;
			temp = t;
			t = temp % 25;
		}
		if (t >= 10)
		{
			c += t / 10;
			temp = t;
			t = temp % 10;
		}
		if (t >= 5)
		{
			c += t / 5;
			temp = t;
			t = temp % 5;
		}
		if (t >= 2)
		{
			c += t / 2;
			temp = t;
			t = temp % 2;
		}
		c += t;
	}
	printf("%d\n", c);
	return (0);
}
