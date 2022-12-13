#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints 0 - 9 and a - f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters = 'a';

	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(letters);
			letters++;
		}
	}

	putchar('\n');

	return (0);
}
