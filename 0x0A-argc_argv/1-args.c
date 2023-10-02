#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the number passed
 * @argc: input param
 * @argv: input param
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}

