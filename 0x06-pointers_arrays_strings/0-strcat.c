#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0, i;

	/* Get the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Get the length of the source string */
	while (src[src_len] != '\0')
		src_len++;

	/* Concatenate the source string to the destination string */
	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];

	/* Add the terminating null byte */
	dest[dest_len + src_len] = '\0';

	return dest;
}
