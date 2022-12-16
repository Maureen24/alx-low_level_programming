#include "main.h"

/**
  * Description: print_last_digit - prints the last digit of a number
  *@n: parameter in use
  * Return: last digit of the number
  */

int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
		last_digit = n % 10;
	else
		last_digit = (n % 10) * -1;
	_putchar('0' + last_digit);
	return (last_digit);
}
