#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabetL;

	char alphabetU;

	alphabetL = 'a';

	alphabetU = 'A';
	while (alphabetL <= 'z')
	{
		putchar(alphabetL);
		alphabetL++;
	}
	while (alphabetU <= 'Z')
	{
		putchar(alphabetU);
		alphabetU++;
	}

	putchar('\n');

	return (0);
}
