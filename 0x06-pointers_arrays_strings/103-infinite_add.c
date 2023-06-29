#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, max_len, sum, carry, i;

	/* Get the lengths of n1 and n2 */
	len1 = 0;
	while (n1[len1] != '\0')
		len1++;
	len2 = 0;
	while (n2[len2] != '\0')
		len2++;

	/* Check if result can fit in r */
	if (size_r <= len1 || size_r <= len2)
		return (0);

	/* Initialize variables */
	carry = 0;
	i = 0;
	max_len = len1 > len2 ? len1 : len2;

	/* Perform addition digit by digit */
	while (i < max_len)
	{
		sum = carry;
		if (i < len1)
			sum += n1[len1 - 1 - i] - '0';
		if (i < len2)
			sum += n2[len2 - 1 - i] - '0';

		carry = sum / 10;
		r[i] = (sum % 10) + '0';

		i++;
	}

	/* Add the last carry if necessary */
	if (carry)
	{
		if (i >= size_r - 1)
			return (0);
		r[i] = carry + '0';
		i++;
	}

	/* Terminate the result string */
	r[i] = '\0';

	/* Reverse the result string */
	len1 = 0;
	len2 = i - 1;
	while (len1 < len2)
	{
		char temp = r[len1];
		r[len1] = r[len2];
		r[len2] = temp;
		len1++;
		len2--;
	}

	return (r);
}
