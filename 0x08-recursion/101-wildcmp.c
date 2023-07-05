#include "main.h"

/**
 * wildcmp - Compares two strings and checks for wildcard match
 * @s1: First string to compare
 * @s2: Second string to compare (can contain wildcards)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	int match;

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		match = wildcmp(s1, s2 + 1);
		if (*(s1 + 1) != '\0' && match == 0)
			match = wildcmp(s1 + 1, s2);
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		match = wildcmp(s1 + 1, s2 + 1);
	}
	else
	{
		return (0);
	}

	return (match);
}
