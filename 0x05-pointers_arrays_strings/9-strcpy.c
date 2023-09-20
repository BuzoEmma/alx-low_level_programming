#include "main.h"

/**
 * _strcpy - this function copy
 * @dest: first parameter
 * @src: second parameter
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
		return (dest);
}
