#include "main.h"

/**
  * Description: print_alphabet_x10 - prints the alphabet 10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char alphabet;

	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');
	}
}