#include "main.h"

/**
  * Description: print_most_numbers - skip 2 and 4
  * Return : 0
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar('0' + i);
	}

	_putchar('\n');
}
