#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A characyer pointer variable filename.
 * @text_content: A character pointer variable text_content.
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0; /* File descriptor, number of bytes written, and string length. */

	if (!filename) /* Check if filename is NULL. */
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600); /* Open the file in write-only mode and create it if it doesn't exist. */
	if (fd == -1) /* Check if file descriptor is valid. */
		return (-1);

	if (text_content) /* Check if text_content is not NULL. */
	{
		while (text_content[len]) /* Count the length of the string. */
			len++;
		w = write(fd, text_content, len); /* Write the string to the file. */

		if (w == -1) /* Check if the write operation failed. */
		{
			close(fd); /* Close the file. */
			return (-1); /* Return an error code. */
		}
	}
	close(fd); /* Close the file. */
	return (1); /* Return a success code. */
}

