#include <stdio.h>

int main() {
    // Print all single-digit numbers separated by ", "
    for (int i = 0; i < 10; i++) {
        putchar('0' + i);

        // Print ", " except for the last digit
        if (i != 9) {
            putchar(',');
            putchar(' ');
        }
    }

    // Print a newline
    putchar('\n');

    return 0;
}
