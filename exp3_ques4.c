#include <stdio.h>

int main() {
    float n;
    int positive = 0, negative = 0, zero = 0;

    while (1) {
      printf("Enter a Number (Enter 898989 to stop the program):");
        scanf("%f", &n);

        if (n == 898989) {
            break;
        }

        if (n > 0) {
            positive++;
        } else if (n < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeros: %d\n", zero);

    return 0;
}