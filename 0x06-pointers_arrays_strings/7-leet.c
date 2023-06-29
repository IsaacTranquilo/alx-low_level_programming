#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char *leet_letters = "aAeEoOtTlL";
	char *leet_digits = "4433007711";

	/* Iterate over each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate over the leet_letters array to find a match */
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			/* Check if the current character matches a leet letter */
			if (str[i] == leet_letters[j])
			{
				/* Replace the character with the corresponding leet digit */
				str[i] = leet_digits[j];
				break;  /* Exit the inner loop */
			}
		}
	}

	return str;
}
