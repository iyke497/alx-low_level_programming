#include "main.h"

/**
 * print_to_98 - Prints natural numbers to 98
 * @n: Starting point of the count
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		do {
			_putchar(n);
			n--;
		} while (n >= 98);
	}
	else if (n == 98)
	{
		_putchar(n);
	}
	else
	{
		do {
			_putchar(n);
			n++;
		} while (n <= 98)
	}
}

