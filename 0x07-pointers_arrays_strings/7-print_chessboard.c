#include "main.h"

#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("Sum of first diagonal: %d\n", sum1);
	printf("Sum of second diagonal: %d\n", sum2);
}

