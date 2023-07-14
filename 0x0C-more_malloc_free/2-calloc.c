#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets the memory to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         If nmemb or size is 0, or if malloc fails, the function returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Set memory to zero using memset */
	memset(ptr, 0, total_size);

	return (ptr);
}
