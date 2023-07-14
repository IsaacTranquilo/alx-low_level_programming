#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the currently allocated memory block in bytes
 * @new_size: New size of the memory block in bytes
 *
 * Return: Pointer to the reallocated memory block
 *         If new_size is zero and ptr is not NULL, it returns NULL
 *         If malloc fails to allocate memory, it returns NULL
 *         If new_size is equal to old_size, it returns ptr without any changes
 *         If ptr is NULL, it is equivalent to malloc(new_size)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy contents from old memory block to new memory block */
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
