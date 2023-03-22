#include "3-cal.h"

/**
 * op_add - Add operation
 * @a: The first argument
 * @b: The second argument
 *
 * Return: The remaindeer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Add operation
 * @a: The first argument
 * @b: The second argument
 *
 * Return: The remaindeer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - Add operation
 * @a: The first argument
 * @b: The second argument
 *
 * Return: The remaindeer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mul - Add operation
 * @a: The first argument
 * @b: The second argument
 *
 * Return: The remaindeer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - Add operation
 * @a: The first argument
 * @b: The second argument
 *
 * Return: The remaindeer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
