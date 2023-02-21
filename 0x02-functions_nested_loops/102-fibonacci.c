#include <stdio.h>

/**
 * main - Entry point
 * Return: Alwys 0
 */
int main(void)
{
	int i, x, y, z;

	x = 1;
	y = 2;
	z = x + y;
	printf("%d, %d, ", 1, 2);
	for (i = 3; i < 50; i++)
	{	if (i != 50)
			printf("%d, ", z);
		else
			printf("%d", z);
		x = y;
		y = z;
		z = x + y;

	}
	printf("\n");
	return (0);
	
}
