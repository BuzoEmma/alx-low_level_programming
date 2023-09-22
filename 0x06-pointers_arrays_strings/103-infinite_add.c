#include "main.h"

/**
 * infinite_add - this function adds 2 int as strings
 * @n1: first value number as a string
 * @n2: second value number as a string
 * @r: stores the result
 * @size_r: the size of the result buffer
 * Return: a pointer to the result or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry = 0;

	i = j = k = 0;

	while (n1[i] || n2[j])
	{
		int digit1 = (n1[i]) ? (n1[i] - '0') : 0;
		int digit2 = (n2[j]) ? (n2[j] - '0') : 0;

		int sum = digit1 + digit2 + carry;

		if (k >= size_r - 1)
			return (0);

		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i++;
		j++;
		k++;
	}

	if (carry && k < size_r - 1)

	{
		r[k] = carry + '0';
		k++;
	}
	r[k] = '\0';
	if (k >= size_r)
	return (0);

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
