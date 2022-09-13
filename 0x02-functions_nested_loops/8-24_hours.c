#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hr, min = 48;

	while (hr < 5052)
	{
		_putchar(hr);

		while (min < 5448)
		{
			_putchar(min);
			min++;
		}

		hr++;
	}
}
