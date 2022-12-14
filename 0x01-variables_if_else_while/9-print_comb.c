#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints the given statement to stdout'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;

		if (i < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
