#include "main.h"
/* Task 0 0x15. C - File I/O  */

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: File which will be read and print
 * @letters: number of letters it should read and print
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int cont;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);


	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read(fd, buf, letters);

	cont = 0;
	while (*(buf + cont) != '\0')
		cont++;

	write(STDOUT_FILENO, buf, cont);

	close(fd);
	
	return (cont);
}
