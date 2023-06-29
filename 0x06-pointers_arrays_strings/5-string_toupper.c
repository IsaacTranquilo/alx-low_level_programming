#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: Pointer to the modified string str
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Iterate over each character in the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - 'a' + 'A';
		}

		i++;  /* Move to the next character */
	}

	return str;
}
