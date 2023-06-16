#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *              followed by a new line using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char i;

    for (i = 'z'; i >= 'a'; i--)
    {
        putchar(i);
    }

    putchar('\n');

    return 0;
}

