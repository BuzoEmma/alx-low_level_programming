#include "main.h"

/**
 * _strncpy - this function copy 2 strings
 * @dest: first parameter
 * @src: second parameter of _strncpy function
 * @n: third parameter
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
