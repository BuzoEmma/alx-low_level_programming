#include <stdio.h>
#include "main.h"

/**
 * main - this function prints it self
 * @argc: input value
 * @argv: inout value
 * Return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
