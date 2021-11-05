#include <stdarg.h>
#include <stdio.h>
/* Task 2 0x10. C - Variadic functions  */

/**
 * print_strings - prints strings, followed by a new line
 * @separator: String print between
 * @n: Number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (separator == NULL)
		return;
	if (n == 0)
		return;

	va_start(ap, n);

	if (n == 0)
		printf("\n");
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(ap, char*);
			if (separator == NULL)
			{
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
			}
			else
			{
				if (s != NULL)
					printf("%s%s", s, separator);
				else
					printf("(nil)%s", separator);
			}
		}
		s = va_arg(ap, char*);
		if (s != NULL)
			printf("%s\n", s);
		else
			printf("(nil)\n");
	}
	va_end(ap);
}
