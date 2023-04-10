#include "main.h"

/**
 * append_text_to_file - The functiom that appends text to a file
 * @filename: The filename
 * @text_content: The content to be added
 *
 * Return: 1 on success , -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, wbytes, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_WRONLY | O_APPEND);

	if (fdo && text_content == NULL)
		return (1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;

		wbytes = write(fdo, text_content, len);
	}

	if (fdo == -1 || wbytes == -1)
		return (-1);

	return (1);
}
