#include "main.h"

/**
  * Description: _isupper - checks if the letter is uppercase
  * @c: parameter in use
  * Return: 1 if true, 0 if false
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
