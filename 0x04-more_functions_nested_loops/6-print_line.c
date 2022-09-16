#include "main.h"

/**
 * print_line - prints a straight line to stdout
 * @n: Number of times to print line
 */
void print_line(int n)
{
	int i = 0;

	do {
		_putchar('_');
		i++;
	} while (i < n);
}
