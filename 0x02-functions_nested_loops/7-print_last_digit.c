#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: Type of parameter to be printed
 *
 * Return: Value of last digit.
 */
int print_last_digit(int i)
{
	int lastdigit;

	if (i < 0)
		i = -i;
	lastdigit = i % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
