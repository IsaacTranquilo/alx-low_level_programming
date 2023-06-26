#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length - 1) / 2 + 1;

	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}
