#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"
/* Task 101 0x05. C - Pointers, arrays and strings  */

/**
 * main - Generates a password
 * Description: Generates a password
 * Return: void
 */
int main(void)
{
	int i;
	int random;
	char n[10];
	char lo[26];
	char up[26];
	char password[8];

	srand((unsigned int)(time(NULL)));

	random = 0;
	n[] = "0123456789";
	lo[] = "abcdefghijklmnoqprstuvwyzx";
	up[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	random = rand() % 4;

	for (i = 0; i < 8; i++)
	{
		if (randomizer == 1)
		{
			password[i] = n[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = lo[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = up[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = lo[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}
