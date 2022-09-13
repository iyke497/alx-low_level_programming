#include "main.h"

/**
 * _isalpha - checks if character is upper or lowercase
 * @c: Character to be checked
 *
 * Return: 1 for upper/lowercase letter 0 otherwise
 */
int _isalpha(int c)
{
	/*Lowercase check*/
	if (c > 64 && c < 123)
	{
		if (c > 90 && c < 97)
			return (0);
		else
			return (1);
	}
	else
	{
		return (0);
	}
}
