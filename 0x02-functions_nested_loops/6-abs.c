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

	if (i < '0')
	{
		val = (i * -1);
		_putchar((int)val);
	}
	else
	{
		_putchar((int)i);
	}

	return (0);
}
