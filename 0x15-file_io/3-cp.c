#include "main.h"

void close_file(int fd);
char *create_buff(char *filename);

/**
 * close_file - The function to close a file
 * @fd: The file descriptor
 *
 * Return: The result of closing
 */
void close_file(int fd)
{
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buff - Allocates 1024 bytes for a buffer.
 * @filename: The filename the buffer store for.
 *
 * Return: A pointer to the buffer.
 */
char *create_buff(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The arguments values
 *
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int fdo1, fdo2, rbytes, wbytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[1]);
	fdo1 = open(argv[1], O_RDONLY);
	rbytes = read(fdo1, buffer, 1024);
	fdo2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	do {
		if (fdo1 == -1 || rbytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wbytes = write(fdo2, buffer, rbytes);
		if (fdo2 == -1 || wbytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rbytes = read(fdo1, buffer, 1024);
		fdo2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (rbytes > 0);

	close_file(fdo1);
	close_file(fdo2);
	free(buffer);

	return (0);
}
