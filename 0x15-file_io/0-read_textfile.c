#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: letters(nums) to be read
 * Return: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…).
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, w = 0, t = 0;
	char *buf = NULL;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (w);
}
