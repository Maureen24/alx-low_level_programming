#include "main.h"

/**
  * Description: print_sign - prints the sign of a number
  * @n: the parameter in use
  * Return: 1 when positive,  -1 when negative and 0 when zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_puchar('-');
		return (-1);
	}
}
