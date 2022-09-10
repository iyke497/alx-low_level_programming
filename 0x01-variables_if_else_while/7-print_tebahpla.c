#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int c = 122;

	do {
		putchar(c);
		if (c == 97)
			putchar('\n');
		c--;
	} while (c > 96);

	return (0);
}
