#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a fileName.
 * @filename: filename *p
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0; /* File descriptor, number of bytes written, and string length. */

	if (!filename) /* Check if filename is NULL. */
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND); /* Open the file in write-only mode and append to it if it exists. */
	if (o == -1) /* Check if file descriptor is valid. */
		return (-1);

	if (text_content) /* Check if text_content is not NULL. */
	{
		while (text_content[len]) /* Count the length of the string. */
			len++;
		w = write(o, text_content, len); /* Write the string to the file. */
		if (w == -1) /* Check if the write operation failed. */
		{
			close(o); /* Close the file. */
			return (-1); /* Return an error code. */
		}
	}
	close(o); /* Close the file. */
	return (1); /* Return a success code. */
}

