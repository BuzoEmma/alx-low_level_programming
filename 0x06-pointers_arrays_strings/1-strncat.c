#include "main.h"

/**
 * _strncat - name of the function with 3 parameters
 * @dest: first parameter
 * @src: second parameter
 * @n: the tthird parameter
 * Return: always 0 (success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
