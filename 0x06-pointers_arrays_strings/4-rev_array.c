#include <stdio.h>
/**
 * reverse_array - Reverse array
 * @a: array
 * @n: NBR of el
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n--;
	while (i < n)
	{
		tmp = *(a + i);

		*(a + i) = *(a + n);
		*(a + n) = tmp;

		i++;
		n--;
	}
}
