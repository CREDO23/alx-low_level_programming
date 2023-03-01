#include "main"

/**
 * _strcmp - The function to compare
 * @s1: The 1 string
 * @s2: The 2 string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));


}
