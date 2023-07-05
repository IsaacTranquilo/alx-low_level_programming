#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of the number if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
    /* Base case: If the number is negative, it does not have a natural square root. */
    if (n < 0)
        return -1;

    /* Base case: If the number is 0 or 1, the square root is the number itself. */
    if (n == 0 || n == 1)
        return n;

    /* Recursive case: Calculate the square root recursively. */
    int i;
    for (i = 1; i <= n / 2; i++)
    {
        if ((i * i) == n)
            return i;
        else if ((i * i) > n)
            break;
    }

    return _sqrt_recursion(n - 1);
}
