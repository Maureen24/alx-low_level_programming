#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints triple digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds < 10; hundreds++)
	{
		for (tens = hundreds + 1; tens < 10; tens++)
		{
			for (ones = tens + 1; ones < 10; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hundreds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
