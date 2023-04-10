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
	int len, fdo, wbytes, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i++])
		len++;
	}

	fdo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wbytes = write(fdo, text_content, len);

	if (fdo < -1 || wbytes == -1)
		return (-1);

	close(fdo);

	return (1);
}
