#include <stdarg.h>
#include <stdio.h>
/* Task 3 0x10. C - Variadic functions  */

/**
 * print_all - prints anything
 * @format: String
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, len, p, z;
	char c;
	char *str;
	float f;
	double d;

	va_start(ap, format);
	len = 0, p = 0;
	while (format[len] != '\0')
		len++;
	while (p < len)
	{
		z = 0;
		switch (format[p])
		{
		case 'i':
		{
			i = va_arg(ap, int);
			printf("%d", i);
			break;
		}
		case 'f':
		{
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		}
		case 'c':
		{
			c = va_arg(ap, int);
			printf("%c", c);
			break;
		}
		case 'd':
		{
			d = va_arg(ap, double);
			printf("%f", d);
			break;
		}
		case 's':
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		default:
		{
			z = 1;
			break;
		}
		}
		if (p != len - 1 && z != 1)
			printf(", ");
		p++;
	}

	printf("\n");
	va_end(ap);
}
