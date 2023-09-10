#include <stdio.h>


/**
 * main - prints all possible different combinations of three digits.
 * in ascending order separated by comma followed by space
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int digital1, digital2, digital3;

	for (digital1 = 0; digital1 < 8; digital1++)
	{
		for (digital2 = digital1 + 1; digital2 < 9; digital2++)
		{
			for (digital3 = digital2 + 1; digital3 < 10; digital3++)
			{
				putchar((digital1 % 10) + '0');
				putchar((digital2 % 10) + '0');
				putchar((digital3 % 10) + '0');

				if (digital1 == 7 && digital2 == 8 && digital3 == 9)
					continue;
				putchar(',');
				putchar(' ');

			}
		}
	}

		putchar('\n');

		return (0);

}

