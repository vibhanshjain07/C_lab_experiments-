// 3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    {
        int x = 100; // x is declared inside curly braces {}, so it's only available inside that block
        printf("Inside the block: x = %d\n", x);
    }
    // printf("Outside block: a = %d\n", a); //  Error: 'a' is not accessible here

    int y = 200; // y is declared in main(), so it’s available throughout the main function
    printf("Outside the block: y = %d\n", y);
    return 0;
}