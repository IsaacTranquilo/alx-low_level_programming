#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of the number if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
        /* Base case: If the number is negative or 0, it does not have a natural square root. */
        if (n < 0)
                return -1;

        /* Base case: If the number is 0 or 1, the square root is the number itself. */
        if (n == 0 || n == 1)
                return n;

        /* Recursive case: Calculate the square root recursively. */
        int root = _sqrt_helper(n, 1, n);
        return root;
}

/**
 * _sqrt_helper - Helper function for calculating the square root recursively.
 * @n: The number for which to find the square root.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return: The square root of the number within the search range, if found, otherwise -1.
 */
int _sqrt_helper(int n, int start, int end)
{
        if (start <= end)
        {
                int mid = (start + end) / 2;

                if (mid * mid == n)
                        return mid;
                else if (mid * mid > n)
                        return _sqrt_helper(n, start, mid - 1);
                else
                        return _sqrt_helper(n, mid + 1, end);
        }

        return end;
}
