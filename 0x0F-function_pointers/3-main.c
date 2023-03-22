#include "3-cal.h"

/**
 * main - Entry point
 * @argc: The argc
 * @argv: The argv
 *
 * Return: The result
 */

int main(int argc, char **argv)
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);

}
