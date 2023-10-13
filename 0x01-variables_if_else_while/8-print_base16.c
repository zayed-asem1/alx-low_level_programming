#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = 0;

	while (digit <= 15)
	{
		if (digit < 10)
		{
			putchar('0' + digit);
		}
		else
		{
			putchar('a' + digit - 10);
		}
		digit++;
	}

	putchar('\n');

	return (0);
}
