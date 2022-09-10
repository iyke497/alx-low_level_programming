#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int c = 97;

	do {
		putchar(c);
		if (c == 122)
			putchar('\n');
		c++;
	} while (c < 123);

	return (0);
}
