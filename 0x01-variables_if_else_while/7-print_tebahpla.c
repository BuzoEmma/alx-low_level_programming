#include <stdio.h>

/**
 * main - This is the main function that putchar lowercase revise
 * Return: always 0 (success)
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
