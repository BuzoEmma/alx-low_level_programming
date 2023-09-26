#include "main.h"

/**
 * _memset - this function fills the memory
 * @s: input value
 * @b: input value
 * @n: input value
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
