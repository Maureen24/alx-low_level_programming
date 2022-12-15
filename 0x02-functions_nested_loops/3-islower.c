#include "main.h"

/**
  * Description: _islower - checks if a letter is lowercase
  *@c: the parameter
  *
  * Return: 0 if false, 1 if true
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
