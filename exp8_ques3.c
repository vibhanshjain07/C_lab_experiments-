#include <stdio.h>4w    

void modifyValues(int *x, float *y) {
    *x = *x + 10;
    *y = *y + 5.5;
}

int main() {
    int a = 5;
    float b = 3.5;

    printf("Before function call: a = %d, b = %.2f\n", a, b);

    modifyValues(&a, &b);

    printf("After function call: a = %d, b = %.2f\n", a, b);

    return 0;
}
