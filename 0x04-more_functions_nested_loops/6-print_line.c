#include "main.h"

/**
  * Description: print_line - prints a straight line
  * @n: parameter in use
  * Return: 0
  */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
