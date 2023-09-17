#include "main.h"

/**
 * _isdigit - this function checks for digit
 * @c: function parameter for check
 * Return: returns 1 if the c is a digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
