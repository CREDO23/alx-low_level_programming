#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 * @x: The number we will retrieve the last digit
 * Return: The last digit of x
 */
int print_last_digit(int x)
{
	return (abs((x % 10)));
}
