#include "main.h"

/**
 * _strcat - this function concatenates 2 strings
 * @dest: first parameter
 * @src: second parameter
 * Return: always 0 (success)
*/


char *_strcat(char *dest, char *src)
{
	int a, i;

	a = 0;
	i = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[i] != '\0')
	{
		dest[a] = src[i];
			a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}
