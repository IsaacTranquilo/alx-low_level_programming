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
		/* Check if the current character is an alphabet letter */
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			/* Iterate over the normal and rot13 arrays to find a match */
			for (j = 0; normal[j] != '\0'; j++)
			{
				/* Check if the current character matches a letter in normal */
				if (str[i] == normal[j])
				{
					/* Replace the character with the corresponding letter in rot13 */
					str[i] = rot13[j];
					break;  /* Exit the inner loop */
				}
			}
		}
	}

	return str;
}
