#include "main.h"

/**
 * more_numbers - print 10x the numbers 0-14
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	do {
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');

		j++;
	} while (j < 10);

}
