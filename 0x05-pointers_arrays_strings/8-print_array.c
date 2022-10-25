#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of numbers
 * @a: array
 * @n: number of figures printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf('\n');
}
