#include "main.h"

/**
 * rev_string - THe funtion to erverse string
 * @str: String to reverse
 * Return: Nothing
 */
void rev_string(char *str)
{
	int i = 0;
	int l = 0;
	int j;
	char tmp;

	while (str[i])
	{
		i++;
		l++;
	}

	for (j = 0; j < l / 2; j++)
	{
		tmp = str[j];
		str[j] = str[l - 1 - j];
		str[l - 1 - j] = tmp;
	}
}
