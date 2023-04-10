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
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", fd);
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
	int fdo1, fdo2, rbytes1;
	char *buffer;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = create_buff(argv[1]);

	fdo1 = open(argv[1], O_RDONLY);
	if (!fdo1 || fdo1 == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", argv[1]);
		exit(98);
	}

	rbytes1 = read(fdo1, buffer, 1024);

	fdo2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (!fdo2 || fdo2 == -1)
	{
	dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to NAME_OF_THE_FILE"
			, argv[2]);
	exit(99);
	}

	write(fdo2, buffer, rbytes1);

	close_file(fdo1);
	close_file(fdo2);
	free(buffer);

	exit(0);
}
