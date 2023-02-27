#include "main.h"

/**
 *  _atoi - The atoi funtion
 *  @s: The string to be formated
 *  Return: Numberrrrrrrr
 */
int _atoi(char *s)
{
	int prev = 0;
	int next = 0;
	int i;
	int signindex;
	int res = 0;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] > '9' || s[i] < '0')
		{
			if (res != 0)
				prev++;
			continue;
		}
		else
		{
			if (next - prev == 1)
			{
				if (res == 0)
					signindex = i - 1;
				res = res * 10 + s[i] - '0';
				prev = i;
				next = i + 1;
			}
			else
				return (res);
		}
	}

	while (s[signindex] == 45 || s[signindex] == 43 || s[signindex] == 11)
	{
		if (s[signindex] == 45)
			res = -res;
		signindex++;
	}

	return (res);
}
