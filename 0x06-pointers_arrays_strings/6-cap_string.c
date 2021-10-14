#include "main.h"
/* Task 6 0x06. C - More pointers, arrays and strings  */

/**
 * cap_string - Capitalizes all words of a string
 * @a: String to analize
 * Description: Capitalizes all words of a string
 * Return: char
 */
char *cap_string(char *a)
{
	int i;
	int j;
	int l;
	char sym[9] = ",;.!?(){}";

	l = 0;
	while (a[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
		if (a[i] == 34 || a[i] == 32 || a[i] == '\n')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] = a[i + 1] - 32;
		}
		else if (a[i] == 9 || a[i] == 11 || a[i] == 10)
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] = a[i + 1] - 32;
		}
		else
		{
			for (j = 0; j < 9; j++)
				if (a[i] == sym[j])
					if (a[i + 1] >= 97 && a[i + 1] <= 122)
						a[i + 1] = a[i + 1] - 32;
		}
	}

	return (a);
}
