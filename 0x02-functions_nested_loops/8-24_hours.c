#include <stdio.h>

/**
 * jack_bauer - Jack Bauer
 * Retrun: Nothing
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					printf("%d%d:%d%d", i, j, k, l);
				}
			}
		}
	}
}
