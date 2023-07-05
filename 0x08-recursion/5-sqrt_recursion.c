#include "main.h"

/**
 * _sqrt_helper - Recursive helper function to find the square root
 * @n: The number to calculate the square root of
 * @start: The starting point for the search
 * @end: The ending point for the search
 *
 * Return: The square root of n if found, or -1 otherwise
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = start + (end - start) / 2;
	int sqrt = mid * mid;

	if (sqrt == n)
		return (mid);
	else if (sqrt < n)
		return (_sqrt_helper(n, mid + 1, end));
	else
		return (_sqrt_helper(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n,
 *         or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0, n));
}
