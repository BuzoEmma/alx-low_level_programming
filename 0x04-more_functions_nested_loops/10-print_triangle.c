#include "main.h"
/**
 * print_triangle - this function prints the size of the tiangle
 * @size: get the size of the angle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = i; j < size; j++)
	{
	_putchar(' ');
	}

	for (j = 1; j <= i; j++)
	{
	_putchar('#');
	}

	_putchar('\n');
	}
	}
}

