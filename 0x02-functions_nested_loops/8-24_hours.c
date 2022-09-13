#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hr, min = 00;

	while (hr < 24)
	{
		_putchar(hr);

		while (min < 60)
		{
			_putchar(min);
			min++;
		}

		hr++;
	}
}
