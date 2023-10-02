#include <stdio.h>
#include "main.h"

/**
 * main - this main function prints it name
 * @argc: input value
 * @argv: input value
 * Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", *argv);

	return (0);
}
