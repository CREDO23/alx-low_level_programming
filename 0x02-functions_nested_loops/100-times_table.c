#include <stdio.h>

/**
 * times_table - Table
 * @n: The n times
 * Return: Nothing
 */
void times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j != n)
				if (i * j <= n && j != 0)
					printf("  %d,", i * j);
				else if (i * j == 0 && j == 0)
					printf("%d,", i * j);
				else
					printf(" %d,", i * j);
			else
				if (i * j <= n && j != 0)
					printf("  %d", i * j);
				else if (i * j == 0 && j == 0)
					printf("%d,", i * j);
				else
					printf(" %d", i * j);
		}
		printf("\n");
	}
}
