#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - this function sums the 2 diagonal
  *
  * @size: input parameter
  *
  * @a: input parameter
  *
  * Return: 0
  */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int x;

	count1 = 0;
	count2 = 0;

	for (x = 0; x < size; x++)
	{
	count1 = count1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
	count2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", count1, count2);
}

