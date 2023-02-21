#include <stdio.h>

/**
 * jack_bauer - Jack Bauer
 * Retrun: Nothing
 */
void jack_bauer(void)
{
	int i, j, k;

		for (i = 0; i < 24; i++)
		{
			for (j = 0; j < 6; j++)
			{
				for (k = 0; k < 10; k++)
				{
					if (i < 10)
						printf("0%d:%d%d\n", i, j, k);
					else
						printf("%d:%d%d\n", i, j, k);

				}
			}
		}
}
