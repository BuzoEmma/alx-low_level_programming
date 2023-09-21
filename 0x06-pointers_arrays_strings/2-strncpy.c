#include "main.h"

/**
 * _strncpy - this function copy 2 strings
 * @dest: first parameter
 * @src: second parameter of _strncpy function
 * @n: third parameter
 * Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
	return (dest);
}
