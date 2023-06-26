#include "main.h"

#include <limits.h> // For INT_MIN and INT_MAX

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1; // Positive sign by default
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;

	if (s[i] == '-' || s[i] == '+') {
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9') {
		// Check for overflow
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)) {
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return result * sign;
}
