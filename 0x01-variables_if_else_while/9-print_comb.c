#include <stdio.h>

/*
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
int i;

for ( i = 0; i < 10; i++ )
{

if ( i == 0 )
{

	putchar('0' + i);
	putchar(',');

}
else if ( i == 9 )
{


	putchar(' ');
	putchar('0' + i);

}
else
{

	putchar(' ');
	putchar('0' + i);
	putchar(',');

}

}

putchar('\n');

return (0);
}
