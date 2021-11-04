#include <stdarg.h>
#include <stdio.h>
/* Task 1 0x10. C - Variadic functions  */

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: String print between numbers
 * @n: Number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;
	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), separator);

	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
