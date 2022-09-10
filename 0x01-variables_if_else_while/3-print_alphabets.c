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
	int uc = 65;

	do {
		putchar(lc);
		lc++;
	} while (lc < 123);

	/*Print upper case chars*/
	do {
		putchar(uc);
		if (uc == 90)
			putchar('\n');
		uc++;
	} while (uc < 91);
	return (0);
}
