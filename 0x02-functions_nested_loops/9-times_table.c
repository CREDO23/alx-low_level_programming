#include <stdio.h>

/**
 * times_table - Table
 * Return: Nothing
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != 9 || j != 9)
				if (i * j < 10)
					printf("%d, ", i * j);
				else	
					print("%d,  ", i * j);
			else	
				if (i * j < 10)
					printf("%d, ", i * j);
				else		
					print("%d,  ", i * j);
			else	
		}
		printf("\n");
	}
}
