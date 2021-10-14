#include "main.h"
/* Task 100 0x06. C - More pointers, arrays and strings  */

/**
 * rot13 - Encodes a string using rot13
 * @a: String to encode
 * Description: Encodes a string using rot13
 * Return: char
 */
char *rot13(char *a)
{
	int i;
	int j;
	int l;
	char let[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGJIJKLMNOPQRSTUVWXYZ";
	char rot[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGJIJKLM";

	l = 0;
	while (a[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
		for (j = 0; j < 52; j++)
			if (a[i] == let[j])
			{
				a[i] = rot[j];
				break;
			}

	return (a);
}
