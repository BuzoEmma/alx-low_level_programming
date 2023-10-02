#include <stdio.h>
#include "main.h"

/**
 * main - this main function prints it name
 * @argc: input value
 * @argv: input value
 * Return: always 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
