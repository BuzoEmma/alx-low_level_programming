#include "main.h"

/**
 * _strlen_recursion - this function prints str lenght
 * @s: input value
*/

int _strlen_recursion(char *s)
{
	int love = 0;

	if (*s)
	{
		love++;
		love += _strlen_recursion(s + 1);
	}
	return (love);
}
