#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to  stdout.
 * @filename: A pointer to the name of the file
 * @letters: The number of letters to be read
 * Return: w- actual number of bytes read and printed
 *    0/w - The actual number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
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
