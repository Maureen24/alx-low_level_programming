#include "main.h"

/**
  * Description: print_to_98 - prints values from n to 98
  * @n: parameter in use
  * Return: 0
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}
