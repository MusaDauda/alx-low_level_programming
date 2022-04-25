#include "main.h"

/**
 * reverse_array - reverse
 * @a: pointer to int params
 * @n: pointer to int params
 * Return: NULL
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
        int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
