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
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Iterate over each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the current character is a letter */
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			/* Iterate over the letters array to find a match */
			for (j = 0; letters[j] != '\0'; j++)
			{
				/* Check if the current character matches a letter */
				if (str[i] == letters[j])
				{
					/* Replace the character with the corresponding ROT13 letter */
					str[i] = rot13_letters[j];
					break;  /* Exit the inner loop */
				}
			}
		}
	}

	return str;
}
