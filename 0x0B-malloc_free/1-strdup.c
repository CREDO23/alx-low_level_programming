#include "main.h"

/**
 * *_strdup - The funtion to duplicate
 * @str: The string
 * Return: The duplicate of str
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ln++;

	dup = malloc(sizeof(char) * (ln + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < ln; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
