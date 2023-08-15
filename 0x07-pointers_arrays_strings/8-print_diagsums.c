#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonal lines
 * @a: input
 * @size: input
 *
 * return: always 0
 */

void print_diagsums(int *a, int size)

{
	int Sum1, Sum2, y;

	Sum1 = 0;
	Sum2 = 0;

	for (y = 0; y < size; y++)
	{
		Sum1 = Sum1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		Sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", Sum1, Sum2);
}
