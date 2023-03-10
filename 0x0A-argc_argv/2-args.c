#include <stdio.h>

/**
 * main - Entry point
 * @argv: THe array of argumets
 * @argc: THe number of argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
