#include "main.h"


/**
 * print_last_digit - entry point
 *
 * Description: function that prints the last digit of a number.
 *
 * @a:number to compute last digit
 *
 * Return: last digit
 */


int print_last_digit(int a)
{
	int last_num;


	last_num = a % 10;

	if (last_num < 0)
	{
		last_num = last_num * -1;
	}

	_putchar(last_num + '0');
	return (last_num);
}
