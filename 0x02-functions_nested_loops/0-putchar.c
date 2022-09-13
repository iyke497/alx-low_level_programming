#include "main.h"
/**
 * print_putchar - Prints _putchar to stdout
 *
 * Return: Always (0) Success
 */
int print_putchar(void)
{
	/*Initialize the string*/
	char lib[9] = "_putchar";

	int i = 0;

	while (i < 9)
	{
		_putchar(lib[i]);
		if (i == 8)
			_putchar('\n');
		i++;
	}

	return (0);
}
