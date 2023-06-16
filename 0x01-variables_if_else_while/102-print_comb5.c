#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            int i1 = i / 10;  // First digit of i
            int i2 = i % 10;  // Second digit of i
            int j1 = j / 10;  // First digit of j
            int j2 = j % 10;  // Second digit of j

            putchar(i1 + '0');
            putchar(i2 + '0');
            putchar(' ');
            putchar(j1 + '0');
            putchar(j2 + '0');

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

