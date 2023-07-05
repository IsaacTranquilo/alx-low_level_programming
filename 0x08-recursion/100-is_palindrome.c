#include "main.h"

#include <stdio.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * is_palindrome_helper - Recursive helper function to check if a string is a palindrome
 * @s: The string
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	return (is_palindrome_helper(s, 0, len - 1));
}

int main(void)
{
    char *s = "level";
    int result = is_palindrome(s);
    printf("Is the string a palindrome? %s\n", result ? "Yes" : "No");

    return (0);
}
