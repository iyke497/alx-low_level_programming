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
		putchar("%c", c);
		c++;
	} while (c < 123);

	return (0);
}
