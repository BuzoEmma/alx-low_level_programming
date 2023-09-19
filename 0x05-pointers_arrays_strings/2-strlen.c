#include "main.h"

/**
 * _strlen - this function prints strong
 * @s: this parameter returns the length of str
 * Return: always 0
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
