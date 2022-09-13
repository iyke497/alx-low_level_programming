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

	lastdigit = i % 10;

	_putchar(lastdigit);

	return (lastdigit);
}
