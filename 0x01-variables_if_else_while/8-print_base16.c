#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
	putchar('0' + i);
}

for (i = 'a'; i <= 'f'; i++)
{
	putchar(i);
}

putchar('\n');

return (0);
}
