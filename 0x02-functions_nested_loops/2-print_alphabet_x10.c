#include "main.h"

int print_alphabet(void);

/**
 * print_alphabet_x10 - Prints the aalphabet ten times to stdout
 *
 * Return: Success (0)
 */
int print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}

	return (0);
}
/**
 * print_alphabet - prints alhabet to stdout
 *
 * Return: Succes (0)
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
