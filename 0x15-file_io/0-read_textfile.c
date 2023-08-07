#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text 
 * @letters: number of letters 
 * Return: w- actual number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[READ_BUF_SIZE * 8];
	ssize_t bytes;
	int fd;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
