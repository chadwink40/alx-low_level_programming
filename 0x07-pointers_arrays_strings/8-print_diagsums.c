#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, sum_f, sum_b;

	sum_b = sum_f = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sum_b += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sum_f += a[i];
	printf("%d, %d\n", sum_b, sum_f);
}
