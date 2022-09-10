#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char str[] = "Last digit of";
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Your code goes here*/
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_digit);
	}
	return (0);
}
