#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The argc
 * @argv: The argv
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int x, y = 0;

	if (argc >= 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
	}
	else
	{
		printf("%s\n", "Error");
		return (mul);
	}

	return (0);
}
