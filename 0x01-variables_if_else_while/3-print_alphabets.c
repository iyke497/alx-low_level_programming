#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Print lower case chars*/
	int lc = 97;

	do {
		putchar(lc);
		lc++;
	} while (lc < 123);

	/*Print upper case chars*/
	int uc = 65;

	do {
		putchar(uc);
		if (uc == 90)
			putchar('\n')
		uc++;
	} while (uc < 91);
	return (0);
}
