#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
char letter;
int i;
i = 0;
while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
i++;
}
_putchar('\n');
}
