#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSTX
 * standard output.
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of letters the function should read and print.
 *
 * Return: Actual number of letter it could read and print (w).
 * if the function fails or filename is NULL, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
