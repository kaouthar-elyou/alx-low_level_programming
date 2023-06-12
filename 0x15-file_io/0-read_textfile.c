#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to the POSIX standard output.
 * @filename: text file to be  read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 *        0 if the file can not be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp;
	ssize_t w;
	ssize_t r;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fp);
	return (w);
}
