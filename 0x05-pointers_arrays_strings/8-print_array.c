#include "main.h"

/**
 * print_array - this functionprints array intiger
 * @a: first parameter
 * @n: second parameter
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i < n - 1)
		printf(", ");
	}
	printf("\n");
}
