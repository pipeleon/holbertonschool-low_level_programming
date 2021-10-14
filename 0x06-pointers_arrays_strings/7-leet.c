#include "main.h"
/* Task 7 0x06. C - More pointers, arrays and strings  */

/**
 * leet - Encodes a string into 1337
 * @a: String to encode
 * Description: Encodes a string into 1337
 * Return: char
 */
char *leet(char *a)
{
	int i;
	int j;
	int l;
	char let[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";

	l = 0;
	while (a[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
		for (j = 0; j < 10; j++)
			if (a[i] == let[j])
				a[i] = num[j];

	return (a);
}
