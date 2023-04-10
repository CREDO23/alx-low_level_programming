#include "main.h"
#include <string.h>

/**
 * create_file - The function to create a file with permissions
 * @filename: The name of the file
 * @text_content: The content to write in the file
 *
 * Return: 1 on success , -1 on faillure
 */
int create_file(const char *filename, char *text_content)
{
	int fod, wbytes, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	fod = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wbytes = write(fod, text_content, ln);

	if (fod == -1 || wbytes == -1)
		return (-1);

	close(fod);

	return (1);
}
