#include "main.h"

/**
 * _isupper - this is _isupper function for uppercase char
 * @c: the function parameter
 * Return: 1 if c is uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
