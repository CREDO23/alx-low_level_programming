#include <stdio.h>

/**
 * main - Entry point
 * @argv: The array of arguments
 * @argc: The length of argv
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", argc - 1);

	return (0);
}

