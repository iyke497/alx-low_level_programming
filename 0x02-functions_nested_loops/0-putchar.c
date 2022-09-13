#include "main.h"

/**
 * print_putchar - Prints the chars of the string putchar
 *
 * Return: Success (0)
 */
int print_putchar(void)
{
	char str[9] = "_putchar";
	int c = 0;

	do {
		_putchar(str[c]);
		c++;
	} while (c < 9);

	return (0);
}

