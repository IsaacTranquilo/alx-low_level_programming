#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Iterate over each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Find the corresponding index of the character in the normal array */
		for (j = 0; normal[j] != '\0' && str[i] != normal[j]; j++)
			;

		/* Check if the current character is an alphabet letter */
		if (normal[j] != '\0')
		{
			/* Replace the character with the corresponding letter in rot13 */
			str[i] = rot13[j];
		}
	}

	return str;
}

