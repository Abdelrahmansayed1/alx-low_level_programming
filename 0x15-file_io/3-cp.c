#include "main.h"

#define USAGE "usage: cp file_from file_to\n"
#define ERR_NOREAD "error: can't read from file %s\n"
#define ERR_NOWRIET "error: can't write to %s\n"
#define ERR_NOCLOSE "error: can't close fd %d\n"
/**
 * main - program
 * @ac: arg
 * @av: arg
 *
 * Return: 1 or 0
*/

int main(int ac, char **av)
{
	int from_fd, to_fd = 0;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fd = open(av[1], O_RDONLY);

	if(from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]); exit(99);
	
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (to_fd == -1)
	dprint(STDER_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_fd, bufm READ_BUF_SIZE)) > 0)
		if (write(to_fd, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(98);
	
	from_fd = close(from_fd);
	to_fd = close(to_fd);

	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if(to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);

	return(EXIT_SUCCESS);
}
