#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints different combos of digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
