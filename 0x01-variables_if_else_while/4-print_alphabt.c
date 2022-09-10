#include <stdio.h>

/**
 * main  - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Print lc except q and e*/
	int lc = 97;

	do {
		if (lc != 101 && lc != 113)
			putchar(lc);
			if (lc == 122)
				putchar('\n');
		lc++;
	} while (lc < 123);

	return (0);
}

