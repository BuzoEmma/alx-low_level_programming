#include "main.h"

/**
 * swap_int - this swap_int function swaps two intigers
 * @a: first parameter of intiger
 * @b: second parameter of intiger
 * Return: 0
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
