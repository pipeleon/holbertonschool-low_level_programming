#include <stdio.h>
/* Task 2 0x0D. C - Preprocessor  */

/**
 * main - Prints the name of the file it was compiled from
 *
 * Return: char
 */
int main()
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
