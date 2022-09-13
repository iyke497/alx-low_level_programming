#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @i: integer to be checked
 *
 * Return: Success (0)
 */
int _abs(int i)
{
	int val;

	if (i < 0)
	{
		val = (i * -1);
		_putchar(val);
	}
	else
	{
		_putchar(i);
	}

	return (0);
}
