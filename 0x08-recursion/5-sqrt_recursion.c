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
	int mid, sqrt;

	if (start <= end)
	{
		mid = (start + end) / 2;
		sqrt = mid * mid;

		if (sqrt == n)
			return (mid);
		else if (sqrt > n)
			return (_sqrt_helper(n, start, mid - 1));
		else
			return (_sqrt_helper(n, mid + 1, end));
	}

	return (-1);
}
