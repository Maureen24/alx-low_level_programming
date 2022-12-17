#include "main.h"

/**
  * Description: _isdigit - checks that a digit is between 0 - 9
  * @c: parameter in use
  * Return: 1 if true, 0 if false
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
