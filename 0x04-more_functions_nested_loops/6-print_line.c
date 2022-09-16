#include "main.h"

/**
 * print_line - prints a straight line to stdout
 * @n: Number of times to print line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		do {
			_putchar('_');
			if (i == (n - 1))
				_putchar('\n');
			i++;
		} while (i < n);
	}
}
