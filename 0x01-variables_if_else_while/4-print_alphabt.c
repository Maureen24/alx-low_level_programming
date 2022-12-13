#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: doesn't print the letters q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
	putchar(alphabet);
	alphabet++;
	}

	putchar('\n');

	return (0);
}
