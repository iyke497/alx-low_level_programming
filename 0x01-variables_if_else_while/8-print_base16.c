#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int c = 97;

	do {
		putchar(i);
		i++;
	} while (i < 58);

	do {
		putchar(c);
		if (c == 102)
			putchar('\n');
		c++;
	} while (c < 103);

	return (0);
}

