#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
int i;

for ( i = 'a'; i <= 'z'; i++)
{
	if(i != 'e' && i != 'q')
		putchar(i);
	 
	if( i == 'z' )
		putchar('\n');

}

return (0);

}
