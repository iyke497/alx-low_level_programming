#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 */
void print_numbers(void)
{
	int i = 48;

	do {
		_putchar(i);
		if (i == 57)
			_putchar('\n');
		i++;
	} while (i < 58);
}
