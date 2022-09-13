#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @int: Tpe of parameter to be printed
 *
 * Return: Value of last digit.
 */
int print_last_digit(i)
{
	int lastdigit;

	lastdigit = i % 10;

	_putchar(lastdigit);

	return lastdigit;
}
