#include "main.h"
/* Task 100 0x08. C - Recursion  */

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
 * _palin - Evalulates if its a palindrome
 * @a: First position to evaluate
 * @b: Last position to evaluate
 * @s: String
 * Description: Evaluates if it is a palindrome
 * Return: int
 */
int _palin(int a, int b, char *s)
{
	int p;

	if (a < b)
	{
		if (s[a] == s[b - 1])
			p = _palin((a + 1), (b - 1), s);
		else
			p = 0;
	}
	else
		return (1);

	return (p);
}


/**
 * is_palindrome - Evaluates if the string is a palindrome or not
 * @s: String to evaluate
 * Description: Evaluates if the string is a palindrome or not
 * Return: int
 */
int is_palindrome(char *s)
{
	int len;
	int p;

	len = _strlen(s);

	if (len == 0)
		return (1);

	p = _palin(0, len, s);

	return (p);
}
