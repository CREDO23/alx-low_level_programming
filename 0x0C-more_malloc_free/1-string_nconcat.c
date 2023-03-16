#include "main.h"

/**
 * *string_nconcat - The function
 * @s1: The first string
 * @s2: The second string
 * @n: The amount of bytes from s2 to add at s1
 * Return: A pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int ln1 = 0;
	int ln2 = 0;
	int i = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		ln1++;

		i++;
	}

	i = 0;

	while (s2[i])
	{
		ln2++;

		i++;
	}

	str = malloc(((sizeof(char) * (ln1 + ln2)) + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= ln1; i++)
		str[i] = s1[i];

	for (i = 0; i <= n && s2[i]; i++)
		str[ln1++] = s2[i];

	str[ln1 + ln2 + 1] = '\0';

	return (str);
}
