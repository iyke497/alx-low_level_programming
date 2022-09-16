#include "main.h"
/**
 * print_most_numbers - prints digits 0-9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48;

	do {
		if (i != 50 || i != 52)
			_putchar(i);
			if (i == 57)
				_putchar('\n');
		i++;
	} while (i < 58);
}
