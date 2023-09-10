 #include <stdio.h>


/**
 * main -prints all possible different combinations of two digits
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int digital1, digital2;

	for (digital1 = 0; digital1 < 9; digital1++)
	{
		for (digital2 = digital1 + 1; digital2 < 10; digital2++)
		{
			putchar((digital1 % 10) + '0');
			putchar((digital2 % 10) + '0');

			if (digital1 == 8 && digital2 == 9)
			continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}

