#include "main.h"
/* Task 1 0x15. C - File I/O  */

/**
 * create_file - creates a file
 * @filename: Name of the file
 * @text_content: Content
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int cont;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		cont = 0;
		while (*(text_content + cont) != '\0')
			cont++;

		write(fd, text_content, cont);
	}

	close(fd);

	return (1);
}
