#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0'); /* Print first digit of first number */
putchar((num1 % 10) + '0'); /* Print second digit of first number */
putchar(' '); /* Print space */
putchar((num2 / 10) + '0'); /* Print first digit of second number */
putchar((num2 % 10) + '0'); /* Print second digit of second number */

if (num1 != 98 || num2 != 99)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}
putchar('\n'); /* Print new line */

return (0);
}
