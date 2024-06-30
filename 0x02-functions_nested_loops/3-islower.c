#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * This function demonstrates the usage of the _islower function.
 * It checks if a character is lowercase and prints the result.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char test_char = 'c';

if (_islower(test_char))
printf("%c is lowercase\n", test_char);
else
printf("%c is not lowercase\n", test_char);

return (0);
}
