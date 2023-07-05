#include "main.h"

/**
 * sqrt_helper - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return: The square root of the number within the search range, if found, otherwise -1.
 */
int sqrt_helper(int n, int start, int end)
{
    /* Base case: If the number is negative, it does not have a natural square root. */
    if (n < 0)
        return -1;

    /* Base case: If the number is 0 or 1, the square root is the number itself. */
    if (n == 0 || n == 1)
        return n;

    /* Base case: If the search range is exhausted, return -1. */
    if (start > end)
        return -1;

    /* Calculate the middle value of the search range. */
    int mid = start + (end - start) / 2;

    /* Check if the square of the middle value is equal to the number n. */
    if ((mid * mid) == n)
        return mid;

    /* If the square of the middle value is greater than n, search the lower half of the range. */
    if ((mid * mid) > n)
        return sqrt_helper(n, start, mid - 1);

    /* If the square of the middle value is less than n, search the upper half of the range. */
    return sqrt_helper(n, mid + 1, end);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of the number if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
    return sqrt_helper(n, 0, n);
}
