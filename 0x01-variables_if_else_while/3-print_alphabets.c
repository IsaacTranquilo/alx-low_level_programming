#include <stdio.h>

/**
 * main - function prints all lower case alphas using putchar
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';
        char b = 'A';

	while (c <= 'z')
	{
	putchar(c);
	c = c + 1;
	}

        while (b <= 'Z')
	{
	putchar(b);
        b = b + 1;
	}

	putchar('\n');

	return (0);
}