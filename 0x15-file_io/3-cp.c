#include "main.h"
/* Task 4 0x15. C - File I/O  */

/**
 * len_str - Lenght of a string
 * @text_content: Content
 *
 * Return: int
 */
int len_str(char *text_content)
{
	int i;

	i = 0;
	while (*(text_content + i) != '\0')
		i++;

	return (i);
}

/**
 * main - copy
 * @ac: How many arguments
 * @av: Array of arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd, fd2, cl, cont;
	char bf[4096];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	read(fd, bf, 1024);
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cont = len_str(bf);
	write(fd2, bf, cont);
	cl = close(fd2);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
