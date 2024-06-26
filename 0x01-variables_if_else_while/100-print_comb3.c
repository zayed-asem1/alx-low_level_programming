#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{
putchar(digit1 + '0'); /* Print first digit */
putchar(digit2 + '0'); /* Print second digit */

if (digit1 != 8 || digit2 != 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}
putchar('\n'); /* Print new line */

return (0);
}
