#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
        if (*s == '\0')
                return 0;
        else
                return 1 + _strlen(s + 1);
}

/**
 * _is_palindrome - Helper function to check if a string is a palindrome.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome(char *s, int start, int end)
{
        /* Base case: Empty string or single character is a palindrome. */
        if (start >= end)
                return 1;

        /* Check if the characters at start and end indices match. */
        if (s[start] == s[end])
                return _is_palindrome(s, start + 1, end - 1);
        else
                return 0;
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome, 0 otherwise.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
        int len = _strlen(s);
        return _is_palindrome(s, 0, len - 1);
}
