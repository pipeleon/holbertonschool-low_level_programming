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
	char n[] = "0123456789";
	char lo[] = "abcdefghijklmnoqprstuvwyzx";
	char up[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char password[8];

	srand((unsigned int)(time(NULL)));

	random = 0;

	random = rand() % 4;

	for (i = 0; i < 8; i++)
	{
		if (random == 1)
		{
			password[i] = n[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = lo[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
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
