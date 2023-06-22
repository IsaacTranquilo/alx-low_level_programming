#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * @num: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor of the given number.
 */
unsigned long largest_prime_factor(unsigned long num)
{
	unsigned long i;

	for (i = 2; i * i <= num; i++)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}

	if (num > 1)
		return num;
	else
		return i;
}

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("%lu\n", largest_factor);

	return 0;
}
