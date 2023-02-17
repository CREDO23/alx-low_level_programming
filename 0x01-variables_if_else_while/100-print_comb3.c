#include <stdio.h>
/**
 * main - Print  Hello word
 * Return: Always 0
 */
int main(void)
{

int i, j;

for (i = 0; i < 10; i++)
{

for (j = i + 1; j < 10; j++)
{

if (!(i == 0 && j == 1))
{
	putchar(' ');
}

putchar('0' + i);

putchar('0' + j);

if (!(i == 8 && j == 9))
{
	putchar(',');
}

}

}

putchar('\n');

return (0);
}
