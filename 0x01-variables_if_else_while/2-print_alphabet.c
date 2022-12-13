#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
