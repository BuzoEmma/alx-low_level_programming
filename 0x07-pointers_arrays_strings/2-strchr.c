#include "main.h"

/**
 * _strchr - this function relocate the string
 * @s: input value
 * @c: input value
 * Return: c
*/


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
