#include "main.h"

/**
  * Description: _isalpha - checks whether lette is lowercase or uppercase
  * @c: the parameter in use
  * Return: 0 if false, 1 if true
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
