#include <stdio.h>

/**
 * main - prints upper and lower case alpha
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
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
