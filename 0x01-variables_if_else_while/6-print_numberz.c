#include <stdio.h>

int main(void)
{
for (int i = 0; i < 10; i++)
{
putchar(i + '0'); // Convert integer to its corresponding character
}
putchar('\n'); // Print a newline at the end
return 0;
}
