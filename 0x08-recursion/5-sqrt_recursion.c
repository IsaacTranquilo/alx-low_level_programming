#include "main.h"

/**
 * sqrt_helper - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of the number if it exists, otherwise -1.
 */
int sqrt_helper(int n, int guess)
{
    /* Base case: If the number is negative, it does not have a natural square root. */
    if (n < 0)
        return -1;

    /* Base case: If the guess squared is equal to n, return the guess as the square root. */
    if ((guess * guess) == n)
        return guess;

    /* Base case: If the guess squared is greater than n, the square root doesn't exist. */
    if ((guess * guess) > n)
        return -1;

    /* Recursive case: Increment the guess and call the helper function recursively. */
    return sqrt_helper(n, guess + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of the number if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
    return sqrt_helper(n, 0);
}
