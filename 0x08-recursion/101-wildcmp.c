#include "main.h"
/* Task 101 0x08. C - Recursion  */

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Description: Returns the length of a string
 * Return: int
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
		return (0);

	len = len + _strlen(s + 1);
	len++;

	return (len);
}


/**
 * _cmp2 - Evalulates if it is equal
 * @a1: First position to evaluate of s1
 * @b1: First position to evaluate of s2
 * @a2: Lenght of s1
 * @s1: String 1
 * @s2: String 2
 * Description: Evaluates if it is equal
 * Return: int
 */
int _cmp2(int a1, int b1, int a2, char *s1, char *s2)
{
	int p;

	if (a1 < a2)
	{
		if (s2[b1] == s1[a1])
			p = a1 + 1;
		else
			p = _cmp2((a1 + 1), b1, a2, s1, s2);
	}
	else
		return (0);

	return (p);
}


/**
 * _cmp - Evalulates if it is equal
 * @a1: First position to evaluate of s1
 * @b1: First position to evaluate of s2
 * @a2: Lenght of s1
 * @b2: Lenght of s2
 * @s1: String 1
 * @s2: String 2
 * Description: Evaluates if it is equal
 * Return: int
 */
int _cmp(int a1, int b1, int a2, int b2, char *s1, char *s2)
{
	int p;
	int c;

	if (b1 < b2)
	{
		if (s2[b1] == '*')
			p = _cmp(a1, (b1 + 1), a2, b2, s1, s2);
		else
		{
			if (s2[b1 - 1] == '*' || b1 == 0)
			{
				c = _cmp2(a1, b1, a2, s1, s2);
				if (c == 0)
					p = 0;
				else
					p = _cmp(c, (b1 + 1), a2, b2, s1, s2);
			}
			else
			{
				if (s2[b1] == s1[a1])
					p = _cmp((a1 + 1), (b1 + 1), a2, b2, s1, s2);
				else
					p = _cmp((a1 + 1), 0, a2, b2, s1, s2);
			}
		}
	}
	else
	{
		if (s1[a2 - 1] == s2[b2 - 1] || s2[b2 - 1] == '*')
			return (1);
		else
			return (0);
	}
	return (p);
}


/**
 * wildcmp - compares two strings
 * @s1: String to evaluate
 * @s2: String to evaluate
 * Description: compares two strings
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	int len1;
	int len2;
	int p;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	p = _cmp(0, 0, len1, len2, s1, s2);

	return (p);
}
