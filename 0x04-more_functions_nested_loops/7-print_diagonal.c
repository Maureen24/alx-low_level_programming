#include "main.h"

/**
  * Description: print_diagonal - print a diagonal line
  * @n: parameter in use
  * Return: 0
  */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (n > 1)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}

		}
	}
}
