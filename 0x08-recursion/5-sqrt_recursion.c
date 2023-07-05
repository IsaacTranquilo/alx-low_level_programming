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
		return (-1);

	/* Base case: If the number is 0 or 1, the square root is the number itself. */
	if (n == 0 || n == 1)
		return (n);

	/* Recursive case: Calculate the square root recursively. */
	int root = _sqrt_recursion(n - 1);
	
	/* Check if the square of the calculated root is equal to the number n. */
	if ((root * root) == n)
		return (root);
	
	/* If not, return the next root value. */
	return (_sqrt_recursion(n - 1));
}
