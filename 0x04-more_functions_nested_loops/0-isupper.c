#include "main.h"

/**
 * _isupper - checks an array of chars for uppercase
 * @c: Character to be checked
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	       return (1);
	else
		return (0);
}	
