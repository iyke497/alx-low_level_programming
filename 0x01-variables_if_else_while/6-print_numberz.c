#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	do {
		putchar(i);
		if (i == '9')
			putchar('\n');
		i++;
	} while (i <= '9');
	return (0);
}
