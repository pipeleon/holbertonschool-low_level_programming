#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/*char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";*/
    char s[] = "Esto\"es\tuna\nprueba,para;saber.si!este(codigo)funciona{correctamente}o?no\n";
    char *ptr;

    ptr = cap_string(s);
    printf("%s", ptr);
    printf("%s", s);
    return (0);
}

