#include "main.h"

/**
  * Description: largest_number - prints the largest number out of 3 values
  * @a: parameter1 to be used
  * @b: parameter2 to be used
  * @c: parameter3 to be used
  * Return: largest number
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
