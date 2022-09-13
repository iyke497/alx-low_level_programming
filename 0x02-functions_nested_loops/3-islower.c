#include "main.h"

/**
 * _islower - Checks a character to see if it's lowercase
 * @c: Character to be checked
 *
 * Return: Success (0)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
