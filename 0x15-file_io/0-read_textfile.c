#include "main.h"

/**
 * read_textfile - The function a text in a file
 * @filename: The name of the file
 * @letters: The amount of characters that have to be read
 *
 * Return: The total number of characters in the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, rbytes, wbytes;

	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	rbytes = read(fdo, buffer, letters);
	wbytes = write(STDOUT_FILENO, buffer, rbytes);

	if (fdo < 0 || rbytes < 0 || wbytes < 0)
		return (0);

	if (rbytes != wbytes)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fdo);

	return (rbytes);
}
