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
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
