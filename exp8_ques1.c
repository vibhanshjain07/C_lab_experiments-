#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of a: %d, Address: %p, Pointer Value: %p\n", a, &a, p1);
    printf("Value of b: %.2f, Address: %p, Pointer Value: %p\n", b, &b, p2);
    printf("Value of c: %c, Address: %p, Pointer Value: %p\n", c, &c, p3);

    printf("Values using pointers:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %.2f\n", *p2);
    printf("*p3 = %c\n", *p3);

    return 0;
}
