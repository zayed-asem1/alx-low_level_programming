#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');  /* Print the result ('0' or '1') */
r = _islower('o');
_putchar(r + '0');  /* Print the result ('0' or '1') */
r = _islower(108);
_putchar(r + '0');  /*  Print the result ('0' or '1') */
_putchar('\n');
return (0);
}
