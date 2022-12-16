#include "main.h"

/**
  * Description: print_last_digit - prints the last digit of a number
  *@n: parameter in use
  * Return: last digit of the number
  */

int print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);
	else
		return ((n % 10) * -1);
}
