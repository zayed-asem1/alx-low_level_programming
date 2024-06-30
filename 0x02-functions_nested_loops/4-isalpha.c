#include <stdio.h>
#include "my_isalpha.h"

/**
 * main - Entry point
 *
 * Description: This function tests the _isalpha function.
 * Return: 0 on success
 */
int main(void)
{
char c = 'a';

if (_isalpha(c))
{
printf("%c is an alphabetic character.\n", c);
}
else
{
printf("%c is not an alphabetic character.\n", c);
}
return (0);
}
