#include "main.h"

/**
 * print_to_98 - Prints natural numbers to 98
 * @n: Starting point of the count
 *
 */
void print_to_98(int n)
{
	do {
		_putchar(n);
		n++;
	} while (n < 99);
}
