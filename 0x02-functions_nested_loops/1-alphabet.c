#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Prints alphabet in lowercase followed by new line.
 *
 * Return: Success (0)
 */
int print_alphabet(void)
{
	int lc = 97;

	do {
		_putchar(lc);
		if (lc == 122)
			_putchar('\n');
		lc++;
	} while (lc < 123);
	return (0);
}
