#include "main.h"
#include <stdio.h>

/**
 * _puts - this function prints str
 * @str: this is parameter
 * Return: 0
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
	 _putchar('\n');
}
