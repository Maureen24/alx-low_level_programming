#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');

	return (0);
}
