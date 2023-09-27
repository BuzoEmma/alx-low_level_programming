#include "main.h"

/**
 * _strstr - this function relocates a substring
 * @haystack: input parameter
 * @needle: input parameter
 * Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);

}
