#include "main.h"

/**
 * _memcpy - this function copies memory
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
