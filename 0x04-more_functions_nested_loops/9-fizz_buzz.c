#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3)
			printf("%s ", 'Fizz');
		else if (i % 5)
			printf("%s ", 'Buzz');
		else if (i % 3 && i % 5)
			printf("%s ", 'FizzBuzz');
		else
			printf("%d", i);
	}
	printf("\n");
}
