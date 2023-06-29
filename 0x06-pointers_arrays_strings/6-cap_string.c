#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string str
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;  /* Flag to indicate next character should be capitalized */

	/* Iterate over each character in the string */
	while (str[i] != '\0')
	{
		/* Check if the current character is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = 1;  /* Set flag to capitalize next character */
		}
		/* Check if the current character is a lowercase letter */
		else if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next)
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - 'a' + 'A';
			capitalize_next = 0;  /* Reset flag */
		}
		else
		{
			capitalize_next = 0;  /* Reset flag */
		}

		i++;  /* Move to the next character */
	}

	return str;
}
