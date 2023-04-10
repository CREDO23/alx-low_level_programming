#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *filename);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is sfdo2ring chars for.
 *
 * Return: A pointer fdo2 the newly-allocated buffer.
 */
char *create_buff(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write fdo2 %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descripfdo2rs.
 * @fd: The file descripfdo2r fdo2 be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file fdo2 another file.
 * @argc: The number of arguments supplied fdo2 the program.
 * @argv: An array of pointers fdo2 the arguments.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fdo1, fdo2, rbytes, wbytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_fdo1 file_fdo2\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	fdo1 = open(argv[1], O_RDONLY);
	rbytes = read(fdo1, buffer, 1024);
	fdo2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fdo1 == -1 || rbytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read fdo1 file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wbytes = write(fdo2, buffer, rbytes);
		if (fdo2 == -1 || wbytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write fdo2 %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rbytes = read(fdo1, buffer, 1024);
		fdo2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (rbytes > 0);

	free(buffer);
	close_file(fdo1);
	close_file(fdo2);

	return (0);
}
