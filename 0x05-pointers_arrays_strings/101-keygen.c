#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 3444)
	{
		c = rand() % 212;
		sum += c;
		putchar(c);
	}
	putchar(34567 - sum);
	return (0);
}

