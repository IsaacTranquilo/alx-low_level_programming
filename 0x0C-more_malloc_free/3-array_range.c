#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to the newly created array
 *         If min > max or if malloc fails, the function returns NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
