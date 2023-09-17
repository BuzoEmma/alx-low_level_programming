#include "main.h"

/**
 * print_line -this function prints stright line
 * @n: shows the number times it prints
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;

	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}

}

