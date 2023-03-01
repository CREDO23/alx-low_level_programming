#include "main.h"

/**
 * _strcmp - The fn
 * @s1: The 1 string
 * @s2: The 2 string
 * Return: The diff
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));


}
