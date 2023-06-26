#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char temp;

	// Calculate the length of the string
	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--; // Point to the last character

	// Swap characters from both ends until the middle is reached
	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;

		start++;
		s--;
	}
}
