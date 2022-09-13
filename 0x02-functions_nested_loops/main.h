#include <unistd.h>

/**
 ** _putchar - writes the character c to stdout
 ** @c: The character to print
 **
 ** Return: On success 1.
 ** On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c)
{
		return (write(1, &c, 1));
}

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
