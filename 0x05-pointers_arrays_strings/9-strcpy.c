#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	// Copy each character from src to dest until null character is encountered
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	// Add null character to the end of the copied string
	*dest = '\0';

	return dest_start;
}
