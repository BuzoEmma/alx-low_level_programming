#include "main.h"

/**
 * print_diagonal - this function draws the digonal line
 * @n: shows the multiple times to carry the logic
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	{
	if (j == i)
	_putchar('\\');
	else if (j < i)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}

