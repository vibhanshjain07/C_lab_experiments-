#include <stdio.h>

int main() {
    int x = 5;
    float y = 10.5;
    char z = 'B';

    int *p1 = &x;
    float *p2 = &y;
    char *p3 = &z;

    printf("Original Addresses:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    p1++;
    p2++;
    p3++;

    printf("After Increment:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    p1--;
    p2--;
    p3--;

    printf("After Decrement:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    return 0;
}
